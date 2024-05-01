#include <stdio.h>

/* Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100)
 * u polje. U drugo polje prekopirajte samo parne elemente prvog polja. Prikažite oba polja.
 * Napomena: u drugom polju broj elemenata može biti manji od n.
 */

#define N 100

int main(void) {
  int polje[N];
  int parni[N]; 
  int n;
  int nParnih;
  int i;

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
    scanf("%d", &polje[i]);
  }

  nParnih = 0;
  for (i = 0; i < n; i++) {
    if (polje[i] % 2 == 0) {
      parni[nParnih++] = polje[i];
    }    
  }

  printf("Pocetno polje:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", polje[i]);
  }
  printf("\nParni:\n");
  for (i = 0; i < nParnih; i++) {
    printf("%d ", parni[i]);
  }

  return 0;
}