#include <stdio.h>
#include <string.h>

int main(void) {
  char ime[21];
  int duljina;

  printf("Unesite Vase ime: ");
  gets(ime);
  printf("Vase ime je: %s\n", ime);

  duljina = 0;
  while (ime[duljina] != '\0') {
    duljina++;
  }
  printf("Broj slova (petlja): %d\n", duljina);
  printf("Broj slova (strlen): %lu\n", strlen(ime));

  return 0;
}