#include <stdio.h>

int main(void) {
  char ime[21];

  printf("Unesite Vase ime: ");
  gets(ime);
  printf("Vase ime je: %s\n", ime);

  return 0;
}