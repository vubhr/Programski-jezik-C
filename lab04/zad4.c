#include <stdio.h>

/* Napisati program koji će s tipkovnice učitati dva cijela broja x i y.
 * Ako je x barem za 100 veći od y i pri tome je y ili paran ili negativan,
 * ispisati poruku Istina je. Inače, ne ispisati ništa.
 */

int main(void) {
  int x;
  int y;

  printf("Molimo unesite dva broja: ");
  scanf("%d %d", &x, &y);

  if ((x > y + 100) && (y % 2 == 0 || y < 0)) {
    printf("Istina je\n");
  }

  return 0;
}