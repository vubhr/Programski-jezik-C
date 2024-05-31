#include <stdio.h>

int main(void) {
  char ime1[21];
  char ime2[21];

  printf("Unesite prvo ime: ");
  gets(ime1);
  printf("Unesite drugo ime: ");
  gets(ime2);

  if (strcmp(ime1, ime2) == 0) {
    printf("Imena su ista!\n");
  }

  return 0;
}