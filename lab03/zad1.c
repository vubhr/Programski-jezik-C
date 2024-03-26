#include <stdio.h>

/* Izradite program koji će omogućiti unos prirodne cjelobrojne vrijednosti. Očekuje se da korisnik
 * nikada neće upisati veći broj od 1000. Odaberite najmanji mogući tip varijable koji može pohraniti
 * takvu vrijednost, i prikažite tu vrijednost u dekadskom, heksadekadskom i oktalnom brojevnom sustavu
 * (s vodećim nulama).
 * Unesite  broj: 32
 * DEC:   32
 * HEX: 0020
 * OCT: 0040
 */

#define N 10

int main(void) {
  unsigned short broj;

  printf("Unesite broj: ");
  scanf("%hu", &broj);

  printf("DEC: %4hu\n", broj);
  printf("HEX: %04hx\n", broj);
  printf("OCT: %04ho\n", broj);

  return 0;
}