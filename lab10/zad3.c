#include <stdio.h>

int main(void) {
  int broj1;
  int broj2;
  int zbroj;
  int umnozak;

  int *p1;
  int *p2;
  int *pZbroj;
  int *pUmnozak;

  p1 = &broj1;
  p2 = &broj2;
  pZbroj = &zbroj;
  pUmnozak = &umnozak;

  printf("Unesite prvi broj: ");
  scanf("%d", p1);
  printf("Unesite drugi broj: ");
  scanf("%d", p2);

  *pZbroj = *p1 + *p2;
  *pUmnozak = *p1 * *p2;

  printf("Zbroj: %d\n", *pZbroj);
  printf("Umnozak: %d\n", *pUmnozak);

  return 0;
}
