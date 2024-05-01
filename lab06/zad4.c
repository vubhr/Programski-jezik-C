#include <stdio.h>

/* Izradite program koji omogućava unos rezultata (bodova) kolokvija koji su studenti
 * ostvarili na kolokviju. Program mora prvo omogućiti unos cjelobrojne vrijednosti koja
 * definira koliko će se rezultata (bodova) upisati. Neka ukupan broj rezultata koji je
 * moguće unijeti ne bude veći od 100. Ukoliko korisnik unese broj koji je veći od 100,
 * ponoviti unos dok se ne unese ispravna vrijednost. Nakon svih unesenih rezultata,
 * prikazati prosječan broj bodova i maksimalan broj bodova ostvaren na kolokviju.
 */

#define N 100

int main(void) {
  float polje[N];
  int i;
  int n;
  float prosjek;
  float maksimum;

  n = 0;
  while (1) {
    printf("Unesite n: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
      printf("Neispravan unos\n");
    } else {
      break;
    }
  }

  for (i = 0; i < n; i++) {
    printf("Unesite %d. broj: ", i + 1);
    scanf("%f", &polje[i]);
  }

  maksimum = polje[0];
  prosjek = 0;
  for (i = 0; i < n; i++) {
    if (polje[i] > maksimum) {
      maksimum = polje[i];
    }
    prosjek += polje[i];
  }
  prosjek /= n;

  printf("Prosjek: %.1f\n", prosjek);
  printf("Maksimum: %.1f\n", maksimum);

  return 0;
}