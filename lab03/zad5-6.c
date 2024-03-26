#include <stdio.h>

/* Izradite program koji definira makro naredbu koja izračunava kvadrat neke
 * cjelobrojne vrijednosti. Neka program pomoću jedne scanf funkcije unese dvije
 * cjelobrojne vrijednosti (npr.  a i b) i koristeći makro naredbu izračuna i 
 * prikaže rezultat izraza: a2 + b2.
 */

#define KVADRAT(x) x * x

int main(void) {
  int a;
  int b;

  printf("Unesite dvije vrijednosti: ");
  scanf("%d %d", &a, &b);

  printf("Rezultat: %d\n", KVADRAT(a) + KVADRAT(b));

  return 0;
}