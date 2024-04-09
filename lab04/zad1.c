#include <stdio.h>

int main(void) {
  int broj;
  int uvjet;

  printf("Molimo unesite cijeli broj: ");
  scanf("%d", &broj);

  uvjet = broj > 234;

  printf("Uvjet je %d\n", uvjet);

  if (uvjet) {
    printf("Veci je od 234!\n");
  } else {
    printf("Nije veci od 234!\n");
  }

  return 0;
}