#include <stdio.h>

/* Izradite program koji izračunava sumu znamenaka bilo kojeg 
 * unesenog pozitivnog cijelog broja.
 */

int main(void) {
  unsigned int broj;
  int suma;

  printf("Unesite broj: ");
  scanf("%d", &broj);

  suma = 0;
  while (broj > 0) {
    suma = suma + broj % 10;
    broj = broj / 10;
  }
  
  printf("Suma znamenaka: %d\n", suma);

  return 0;
}