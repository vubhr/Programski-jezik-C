#include <stdio.h>

/* Izradite program koji omogućava unos pozitivnog broja s tipkovnice. 
 * Prikazati redom brojeve od unesenog broja do uključujući 0. 
 * Brojeve odvojiti zarezom.Ne smije biti zarez na kraju.
 */

int main(void) {
  unsigned int broj;
  int i;

  printf("Unesite broj: ");
  scanf("%d", &broj);

  for (i = broj; i > 0; i--) {
    printf("%d,", i);
  }
  printf("%d\n", i);

  return 0;
}