#include <stdio.h>

/* Izradite program koji učitava troznamenkasti broj sa standardnog ulaza
 * (unesena vrijednost će uvijek biti troznamenkasta). Program treba
 * prikazati znamenke stotica, desetica i jedinica svaku u poseban red
 * na standardnom izlazu, te zbroj tih znamenki.
 */

int main(void) {
  unsigned short broj;
  char a;
  char b;
  char c;

  printf("Unesite broj: ");
  scanf("%hu", &broj);

  a = broj / 100;
  b = broj / 10 % 10;
  c = broj % 10;

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("Zbroj: %d\n", a + b + c);

  return 0;
}