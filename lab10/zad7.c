#include <stdio.h>

#define N 5

void prikaziPolje(int *p, int n);

int main(void) {
  int polje[N] = { 5, 4, 3, 2, 1 };

  prikaziPolje(polje, N);

  return 0;
}

void prikaziPolje(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", p[i]);
  }
  printf("\n");
}