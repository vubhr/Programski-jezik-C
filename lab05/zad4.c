#include <stdio.h>

/* Izradite program koji omogućava unos cijelog broja s tipkovnice. 
 * Prikazati sumu svih brojeva od 0 do unesenog broja, te prosječnu vrijednost
 */

int main(void) {
  int broj;
  int suma;
  float prosjek;
  int i;

  printf("Unesite broj: ");
  scanf("%d", &broj);

  suma = 0;
  for (i = 0; i <= broj; i++) {
    suma = suma + i;
  }
  prosjek = suma / (broj * 1.0);
  
  printf("Suma: %d\n", suma);
  printf("Prosjek: %f\n", prosjek);

  return 0;
}