#include <stdio.h>

int main(void) {
  char ime[21];
  int i;

  printf("Unesite Vase ime: ");
  gets(ime);

  printf("Vase ime je: ");
  for (i = strlen(ime) - 1; i >= 0; i--) {
    printf("%c", ime[i]);
  }
  printf("\n");

  return 0;
}