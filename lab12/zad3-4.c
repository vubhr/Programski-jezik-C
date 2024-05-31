#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pretvoriUVelikaSlova(char *tekst);

int main(void) {
  char tekst[] = "TEKST koji sadrzi razlicita slova";

  pretvoriUVelikaSlova(tekst);

  printf("Tekst: %s\n", tekst);

  return 0;
}

void pretvoriUVelikaSlova(char *tekst) {
  int i;

  for (i = 0; i < strlen(tekst); i++) {
    tekst[i] = toupper(tekst[i]);
  }
}