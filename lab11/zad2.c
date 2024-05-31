#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int korijen(int *broj, int *rezultat);

int main(void) {
  int *broj;
  float *rezultat;

  broj = (int*)malloc(sizeof(int));
  rezultat = (float*)malloc(sizeof(float));

  printf("Unesite broj: ");
  scanf("%d", broj);

  *rezultat = sqrt(*broj);
  printf("%.2f\n", *rezultat);

  free(broj);
  free(rezultat);

  broj = NULL;
  rezultat = NULL;

  return 0;
}

int korijen(int *broj, int *rezultat) {
  if (*broj < 0) {
    return -1;
  }
  *rezultat = sqrt(*broj);
  return 0;
}