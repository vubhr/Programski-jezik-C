#include <stdio.h>

/* Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100).
 * Prikažite frekvenciju pojavljivanja svih elemenata.
 */

#define N 100

int main(void) {
  int polje[N];
  int jedinstveni[N];

  int n;
  int nJedinstvenih;
  
  int i;
  int j;
  int frekvencija;

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

  for (i = 0; i < nJedinstvenih; i++) {
    frekvencija = 0;
    for (j = 0; j < n; j++) {
      if (polje[j] == jedinstveni[i]) {
        frekvencija++;
      }
    }
    printf("%d - %dx\n", jedinstveni[i], frekvencija);
  }

  return 0;
}