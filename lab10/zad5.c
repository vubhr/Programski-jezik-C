#include <stdio.h>

int maksimum(int *prvi, int *drugi);

int main(void) {
  int broj1;
  int broj2;
  int veci;

  broj1 = 12;
  broj2 = -4;

  veci = maksimum(&broj1, &broj2);

  printf("Veci: %d\n", veci);

  return 0;
}

int maksimum(int *prvi, int *drugi) {
  if (*prvi > *drugi) {
    return *prvi;
  }
  return *drugi;
}