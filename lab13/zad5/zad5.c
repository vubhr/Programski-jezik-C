#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *fp, *fptr;
  char prezime[50];
  int bodovi, prag;

  // Otvaranje datoteke za čitanje
  fp = fopen("studenti.txt", "r");
  if (fp == NULL) {
    printf("Greska pri otvaranju datoteke!\n");
    return 1;
  }

  // Čitanje bodovnog praga sa standardnog ulaza
  printf("Unesite bodovni prag: ");
  scanf("%d", &prag);

  // Otvaranje datoteke za pisanje
  fptr = fopen("prolaz.txt", "w");
  if (fptr == NULL) {
    printf("Greska pri otvaranju datoteke za pisanje!\n");
    fclose(fp);
    return 1;
  }

  // Čitanje prezimena i bodova iz datoteke i zapisivanje prezimena studenata
  // koji su prešli prag
  while (fscanf(fp, "%s %d", prezime, &bodovi) != EOF) {
    if (bodovi >= prag) {
      fprintf(fptr, "%s\n", prezime);
    }
  }

  // Zatvaranje datoteka
  fclose(fp);
  fclose(fptr);

  printf("Prezimena studenata koji su presli bodovni prag zapisana su u "
         "datoteku 'prolaz.txt'.\n");

  return 0;
}
