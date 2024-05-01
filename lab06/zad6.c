#include <stdio.h>

/* Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100).
 * U drugo polje prekopirajte elemente samo ako se oni još ne nalaze u drugom polju.
 * Prikažite drugo polje.
 */

#define N 100

int main(void) {
  int polje[N];
  int jedinstveni[N];

  int n;
  int nJedinstvenih;
  
  int i;
  int j;

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

  nJedinstvenih = 0;
  for (i = 0; i < n; i++) {
    for (j = 0; j < nJedinstvenih; j++) {
      if (jedinstveni[j] == polje[i]) {
        break;
      }
    }
    if (j == nJedinstvenih) {
      jedinstveni[nJedinstvenih++] = polje[i];
    }
  }

  printf("Pocetno polje:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", polje[i]);
  }
  printf("\nJedinstveni:\n");
  for (i = 0; i < nJedinstvenih; i++) {
    printf("%d ", jedinstveni[i]);
  }

  return 0;
}