#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  FILE *fp;
  char prezime[50];
  int brojac = 0;

  // Otvaranje datoteke za čitanje
  fp = fopen("studenti.txt", "r");
  if (fp == NULL) {
    printf("Greska pri otvaranju datoteke!\n");
    return 1;
  }

  printf("Prezimena studenata:\n");

  // Čitanje prezimena studenata iz datoteke i ispis
  while (fscanf(fp, "%s", prezime) != EOF) {
    printf("%s\n", prezime);
    brojac++;
  }

  // Zatvaranje datoteke
  fclose(fp);

  // Ispis broja studenata
  printf("\nBroj studenata: %d\n", brojac);

  return 0;
}
