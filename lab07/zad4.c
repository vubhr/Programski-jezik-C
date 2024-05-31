#include <stdio.h>

#define N 10

int main(void) {
  int polje[N][N] = { 0 };
  int n;
  int m;
  int i;
  int j;
  int min;
  int minIndeks;

  printf("Unesite n: ");
  scanf("%d", &n);
  printf("Unesite m: ");
  scanf("%d", &m);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("Unesite element za %d.red i %d. stupaca", i + 1, j + 1);
      scanf("%d", &polje[i][j]);
    }
  }

  for (i = 0; i < n; i++) {
    min = polje[i][0];
    minIndeks = 0;
    for (j = 1; j < m; j++) {
      if (polje[i][j] < min) {
        min = polje[i][j];
        minIndeks = j;
      }
      printf("%d. redak: indeks najmanjeg: %d", i + 1, minIndeks);
    }
    printf("\n");
  }

  return 0;
}