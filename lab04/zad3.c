#include <stdio.h>

/* Napisati program koji će s tipkovnice učitati dva cijela broja. 
 * Ako je jedan od učitanih brojevaveći od 100, a onaj drugi manji od 100,
 * ispisati poruku:Jedan je veci, drugi je manji od 100.
 * (uočiti: piše jedan od učitanih brojeva, a ne prvi učitani broj). Inače, ne ispisati ništa.
 */

int main(void) {
  int broj1;
  int broj2;

  printf("Molimo unesite dva broja: ");
  scanf("%d %d", &broj1, &broj2);

  if ((broj1 > 100 && broj2 < 100) || (broj1 < 100 && broj2 > 100)) {
    printf("Jedan je veci, drugi je manji od 100.\n");
  }

  return 0;
}