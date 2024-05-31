#include <stdio.h>

void paran(int);

int main(void) {
  int broj;
  broj = 22;

  paran(broj);

  return 0;
}

void paran(int broj) {
  if (broj % 2 == 0) {
    printf("Broj je paran\n");
  }
}
