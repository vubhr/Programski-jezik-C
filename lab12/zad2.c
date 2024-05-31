#include <stdio.h>
#include <string.h>
#include <ctype.h>

int samoglasnici(char *tekst);

int main(void) {
  char tekst[] = "TEKST koji sadrzi samoglasnike";
  int br;

  br = samoglasnici(tekst);

  printf("Broj samoglasnika: %d\n", br);

  return 0;
}

int samoglasnici(char *tekst) {
  int i;
  int brojSamoglasnika;

  brojSamoglasnika = 0;
  for (i = 0; i < strlen(tekst); i++) {
    if (toupper(tekst[i]) == 'A' ||
        toupper(tekst[i]) == 'E' ||
        toupper(tekst[i]) == 'I' ||
        toupper(tekst[i]) == 'O' ||
        toupper(tekst[i]) == 'U' ||
        toupper(tekst[i]) == 'a' ||
        toupper(tekst[i]) == 'e' ||
        toupper(tekst[i]) == 'i' ||
        toupper(tekst[i]) == 'o' ||
        toupper(tekst[i]) == 'u') {
      brojSamoglasnika++;
    }
  }

  return brojSamoglasnika;
}