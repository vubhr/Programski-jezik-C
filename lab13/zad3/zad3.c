#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fp, *fptr;
  double broj, suma = 0.0, prosjek;
  int brojac = 0;

  // Otvaranje datoteke za čitanje
  fp = fopen("decimale.txt", "r");
  if (fp == NULL) {
    printf("Greska pri otvaranju datoteke!\n");
    return 1;
  }

  // Čitanje decimalnih brojeva iz datoteke i sumiranje
  while (fscanf(fp, "%lf", &broj) != EOF) {
    suma += broj;
    brojac++;
  }

  // Zatvaranje datoteke za čitanje
  fclose(fp);

  // Izračunavanje prosjeka
  prosjek = suma / brojac;

  // Otvaranje datoteke za pisanje
  fptr = fopen("prosjek.txt", "w");
  if (fptr == NULL) {
    printf("Greska pri otvaranju datoteke za pisanje!\n");
    return 1;
  }

  // Zapisivanje prosjeka u datoteku
  fprintf(fptr, "Prosjek: %.2lf\n", prosjek);

  // Zatvaranje datoteke za pisanje
  fclose(fptr);

  return 0;
}
