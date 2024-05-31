#include <stdio.h>

int main(void) {
  int broj1;
  float broj2;

  int *p1;
  float *p2;

  p1 = &broj1;
  p2 = &broj2;

  broj1 = 23;
  broj2 = 4.89;

  printf("Prvi broj: %d\n", broj1);
  printf("Prvi broj: %d\n", *p1);

  printf("Drugi broj: %f\n", broj2);
  printf("Drugi broj: %f\n", *p2);

  return 0;
}
