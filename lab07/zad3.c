#include <stdio.h>

#define N 10

int main(void) {
  int polje[N][N] = { 0 };
  int n;
  int m;
  int i;
  int j;

  printf("Unesite n: ");
  scanf("%d", &n);
  printf("Unesite m: ");
  scanf("%d", &m);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      polje[i][j] = i * m + j + 1;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%3d", polje[i][j]);
    }
    printf("\n");
  }

  return 0;
}