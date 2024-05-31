#include <stdio.h>

int main(void) {
  char ime[21];
  int i;

  printf("Unesite Vase ime: ");
  gets(ime);

  printf("Vase ime je: ");
  for (i = 0; i < strlen(ime); i++) {
    printf("%c ", ime[i]);
  }
  printf("\n");

  return 0;
}