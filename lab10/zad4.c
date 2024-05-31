#include <stdio.h>

void zamijeni(float *a, float *b);

int main(void) {
  float broj1;
  float broj2;

  broj1 = 12.56;
  broj2 = -4.93;

  zamijeni(&broj1, &broj2);

  printf("%f\n", broj1);
  printf("%f\n", broj2);

  return 0;
}

void zamijeni(float *a, float *b) {
  float privremena;
  privremena = *a;
  *a = *b;
  *b = privremena;
}