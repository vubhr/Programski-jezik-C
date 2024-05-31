#include <stdio.h>

int najveci(int, int, int);

int main(void) {
  int naj;

  naj = najveci(2, 5, 4);
  printf("Najveci broj: %d\n", naj);

  return 0;
}

int najveci(int a, int b, int c) {
  if (a > b && a > c) {
    return a;
  } else if (b > a && b > c) {
    return b;
  }
  return c;
}
