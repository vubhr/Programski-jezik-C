#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  double *broj;
  double *rezultat;

  broj = (double*)malloc(sizeof(double));
  rezultat = (double*)malloc(sizeof(double));

  printf("Unesite broj: ");
  scanf("%lf", broj);

  *rezultat = sqrt(*broj);
  printf("%.2lf\n", *rezultat);

  free(broj);
  free(rezultat);

  broj = NULL;
  rezultat = NULL;

  return 0;
}