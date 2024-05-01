#include <stdio.h>

/* Zadano je sljedeće polje:int polje[10] = { 2, 8, -4, 5, 9, -6, 8, 1, 7, -2 };.
 * Omogućite unos dvije vrijednosti: i (0 do 9) i x (-50 do 50). U polje na mjesto
 * s indeksom i umetnite vrijednost x. Prikažite polje.
 */

#define N 10

int main(void) {
  int polje[N] = { 2, 8, -4, 5, 9, -6, 8, 1, 7, -2 };
  int i;
  int x;
  int j;

  printf("Unesite i: ");
  scanf("%d", &i);
  printf("Unesite x: ");
  scanf("%d", &x);

  for (j = N - 2; j >= i; j--) {
    polje[j + 1] = polje[j];
  }
  polje[i] = x;

  for (i = 0; i < N; i++) {
    printf("%d ", polje[i]);
  }

  return 0;
}