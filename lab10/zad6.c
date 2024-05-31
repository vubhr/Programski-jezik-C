#include <stdio.h>

void zbrojiIMnozi(int a, int b, int *zbroj, int *umnozak);

int main(void) {
  int a;
  int b;

  int zbroj;
  int umnozak;

  a = 5;
  b = 6;

  zbrojiIMnozi(a, b, &zbroj, &umnozak);

  printf("Zbroj: %d\n", zbroj);
  printf("Umnozak: %d\n", umnozak);

  return 0;
}

void zbrojiIMnozi(int a, int b, int *zbroj, int *umnozak) {
  *zbroj = a + b;
  *umnozak = a * b;
}