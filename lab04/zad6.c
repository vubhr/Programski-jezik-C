#include <stdio.h>

/* Napisati program koji će s tipkovnice učitati tri cijela broja.
 * Ako su učitane vrijednosti međusobno različite i poredane od manjih
 * prema većim ili od većih prema manjim (npr. za učitane brojeve 
 * -5, 2, 17 ili 6, 3, 1), ispisati poruku Brojevi su poredani i razliciti,
 * inače (npr. za učitanebrojeve 5, 2, 6 ili 4, 4, 5) ispisati poruku
 * Brojevi nisu poredani ili nisu razliciti.
 */

int main(void) {
  int x;
  int y;
  int z;

  printf("Molimo unesite tri broja: ");
  scanf("%d %d %d", &x, &y, &z);

  if ((x > y && y > z) || (x < y && y < z)) {
    printf("Brojevi su poredani i razliciti\n");
  } else {
    printf("Brojevi nisu poredani ili nisu razliciti\n");
  }

  return 0;
}