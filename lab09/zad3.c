#include <stdio.h>

int izracunajSumu(int);

int main(void) {
  int suma;

  suma = izracunajSumu(5);
  printf("Suma: %d\n", suma);

  return 0;
}

int izracunajSumu(int broj) {
  int suma = 0;
  int i;
  for (i = 1; i <= broj; i++) {
    suma = suma + i;
  }
  return suma;
}
