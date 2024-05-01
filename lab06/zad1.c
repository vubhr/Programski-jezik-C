#include <stdio.h>

/* Izradite program koji deklarira polje od 10 cjelobrojnih elemenata. Inicijalizirajte polje
 * na proizvoljne vrijednosti te prikažite sve elemente polja odvojene zarezom (osim zadnjeg
 * elementa nakon kojeg slijedi točka).
 */

#define N 10

int main(void) {
  int polje[N] = { 5, -7, 8, 12, 500, -42, 77, 81, 4, 11 };
  int i;

  for (i = 0; i < N - 1; i++) {
    printf("%d,", polje[i]);
  }
  printf("%d", polje[i]);

  return 0;
}