#include <stdio.h>

/* S tipkovnice učitati cijeli broj n iz intervala [1, 10]. Ako broj nije ispravno upisan,
 * ponavljati unos sve dok se ne upiše ispravna vrijednost. Ako je broj ispravno upisan,
 * prikazati jediničnu matricu reda n. Jedinična matrica reda n se može predstaviti tablicom
 * od n redaka i n stupaca u kojima se vrijednost 1 nalazi na glavnoj dijagonali, a
 * vrijednost 0 na svim ostalim mjestima.
 */

int main(void) {
  int broj;
  int i;
  int j;

  broj = 0;
  while (1) {
    printf("Unesite broj: ");
    scanf("%d", &broj);
    if (broj < 1 || broj > 10) {
      printf("Neispravan unos\n");
    } else {
      break;
    }
  }

  for (i = 0; i < broj; i++) {
    for (j = 0; j < broj; j++) {
      if (i == j) {
        printf("%2d", 1);
      } else {
        printf("%2d", 0);
      }
    }
    printf("\n");
  }

  return 0;
}