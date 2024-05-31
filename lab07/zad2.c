#include <stdio.h>

#define N 10

int main(void) {
  int polje[N][N] = { 0 };
  int n;
  int i;
  int j;

  printf("Unesite n: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    polje[i][i] = 1;
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      printf("%2d", polje[i][j]);
    }
    printf("\n");
  }

  return 0;
}