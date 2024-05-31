#include <stdio.h>

char* nadjiSlovoA(char *tekst);

int main(void) {
  char tekst[] = "DobAr dan";
  char* slovo;

  slovo = nadjiSlovoA(tekst);

  if (slovo != NULL) {
    printf("%s\n", slovo);
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
