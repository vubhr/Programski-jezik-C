#include <stdio.h>

#define N 3

int main(void) {
  int polje[N][N] = {
    { 1, 2, 3 },
    { 4, 5, 6 },
    { 7, 8, 9}
  };
  int i;
  int j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      printf("%2d", polje[i][j]);
    }
    printf("\n");
  }

  return 0;
}