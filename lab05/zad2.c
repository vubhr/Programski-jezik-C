#include <stdio.h>

/* Izradite program koji omogućava unos dva broja s tipkovnice. 
 * Prikazati sve neparne brojeve i svebrojeve koji su djeljivi s 3,
 * od jednog do drugog unesenog broja.
 */

int main(void) {
  int x;
  int y;
  int i;

  printf("Unesite dva broja: ");
  scanf("%d %d", &x, &y);

  for (i = x; i <= y; i++) {
    if (i % 2 == 1 || i % 3 == 0) {
      printf("%d ", i);
    }
  }

  return 0;
}