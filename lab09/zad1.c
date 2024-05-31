#include <stdio.h>

void prikaziVarijablu(int);

int main(void) {
  int broj;
  broj = 23;

  prikaziVarijablu(broj);

  return 0;
}

void prikaziVarijablu(int vrijednost) {
  printf("Vrijednost varijable: %d\n", vrijednost);
}
