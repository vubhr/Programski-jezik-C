#include <stdio.h>

/* S tipkovnice učitati cijeli broj m iz intervala [1, 10] i cijeli broj n iz intervala [1, 10].
 * Nije potrebno provjeravati jesu li brojevi ispravno upisani. Prikazati tablicu od 
 * m redaka i n stupaca. Koji brojevi se trebaju nalaziti u tablici i prema kojem formatu se
 * ispisuju, zaključiti na temelju primjera izvršavanja programa.
 */

int main(void) {
  int m;
  int n;
  int i;
  int j;

  printf("Unesite m: ");
  scanf("%d", &m);
  printf("Unesite n: ");
  scanf("%d", &n);

  for (i = 0; i < m; i++) {
    for (j = n; j >= 1; j--) {
      printf("%2d", j + i);
    }
    printf("\n");
  }

  return 0;
}