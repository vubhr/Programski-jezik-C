#include <stdio.h>

char* nadjiSlovoA(char *tekst);

int main(void) {
  char tekst[] = "Tekst gdje se nalazi A slovo";
  char* slovo;

  slovo = nadjiSlovoA(tekst);

  if (slovo != NULL) {
    printf("Slovo pronadjeno!\n");
  }

  return 0;
}

char* nadjiSlovoA(char *tekst) {
  while (*tekst != '\0') {
    if (*tekst == 'A') {
      return tekst;
    }
    tekst++;
  }

  return NULL;
}
