#include <stdio.h>

int main(void) {
  char tekst[101];
  int i;
  int brojRijeci;

  printf("Unesite tekst: ");
  gets(tekst);

  i = 0;
  brojRijeci = 0;
  while (tekst[i] != '\0') {
    if (tekst[i] == ' ') {
      brojRijeci++;
    }
    i++;
  }

  printf("Broj rijeci: %d\n", brojRijeci + 1);
  i = 0;
  while (tekst[i] != '\0') {
    printf("%c", toupper(tekst[i++]));
  }
  printf("\n");

  return 0;
}