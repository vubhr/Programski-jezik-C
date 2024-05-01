#include <stdio.h>

/* Izradite program koji omogućava unos s tipkovnice 10 decimalnih brojeva.
 * Prikažite samo pozitivne unesene brojeve obrnutim redoslijedom
 */

#define N 10

int main(void) {
  float polje[N];
  int i;

  for (i = 0; i < N; i++) {
    printf("Unesite decimalni broj: ");
    scanf("%f", &polje[i]);
  }

  for (i = N - 1; i >= 0; i--) {
    if (polje[i] >= 0) {
      printf("%.1f ", polje[i]);
    }
  }

  return 0;
}