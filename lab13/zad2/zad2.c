#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp, *fptr;
  int broj, suma = 0, brojac = 0;

  // Otvaranje datoteke za čitanje
  fp = fopen("brojevi.txt", "r");
  if (fp == NULL) {
    printf("Greska pri otvaranju datoteke!\n");
    return 1;
  }

  // Čitanje brojeva iz datoteke i sumiranje
  while (fscanf(fp, "%d", &broj) != EOF) {
    suma += broj;
    brojac++;
  }

  // Zatvaranje datoteke za čitanje
  fclose(fp);

  // Otvaranje datoteke za pisanje
  fptr = fopen("rezultat.txt", "w");
  if (fptr == NULL) {
    printf("Greska pri otvaranju datoteke za pisanje!\n");
    return 1;
  }

  // Zapisivanje rezultata u datoteku
  fprintf(fptr, "Broj vrijednosti: %d\nSuma: %d\n", brojac, suma);

  // Zatvaranje datoteke za pisanje
  fclose(fptr);

  return 0;
}
