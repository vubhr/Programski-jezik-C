#include <stdio.h>

int* maks(int *a, int *b);

int main(void) {
  int br1;
  int br2;

  int *veci;

  br1 = 5;
  br2 = 6;

  veci = maks(&br1, &br2);
  printf("Veci: %d\n", *veci);

  return 0;
}

int* maks(int *a, int *b) {
  if (*a > *b) {
    return a;
  }
  return b;
}
