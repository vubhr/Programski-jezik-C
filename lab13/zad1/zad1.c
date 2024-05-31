#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp;
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

  // Zatvaranje datoteke
  fclose(fp);

  // Ispis rezultata
  printf("Broj vrijednosti: %d\n", brojac);
  printf("Suma: %d\n", suma);

  return 0;
}
