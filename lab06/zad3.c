#include <stdio.h>

/* Izradite program koji omogućava unos s tipkovnice 10 decimalnih brojeva.
 * Nakon unosa svih deset vrijednosti, obrnuti redoslijed podataka unutar polja.
 * Nakon što je poredak elemenata upolju promijenjen, prikazati redom vrijednosti
 * u polju odvojene zarezom i razmakom (s točkom na kraju).
 */

#define N 10

int main(void) {
  float polje[N];
  int i;
  int tmp;

  for (i = 0; i < N; i++) {
    printf("Unesite decimalni broj: ");
    scanf("%f", &polje[i]);
  }

  for (i = 0; i < N / 2; i++) {
    tmp = polje[i];
    polje[i] = polje[N - 1 - i];
    polje[N - 1 - i] = tmp;
  }

  for (i = 0; i < N; i++) {
    printf("%.1f ", polje[i]);
  }

  return 0;
}