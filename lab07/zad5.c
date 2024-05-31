#include <stdio.h>

#define SLOJ 4
#define REDAK 3
#define STUPAC 6 

int main(void) {
  int polje[SLOJ][REDAK][STUPAC] = { 0 };
  int i;
  int j;
  int k;

  for (i = 0; i < SLOJ; i++) {
    printf("%d. sloj\n", i + 1);
    for (j = 0; j < REDAK; j++) {
      for (k = 0; k < STUPAC; k++) {
        polje[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + k + 1;
        printf("%4d", polje[i][j][k]);
      }
      printf("\n");
    }
    printf("\n\n");
  }

  return 0;
}