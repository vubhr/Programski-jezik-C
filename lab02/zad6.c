#include <stdio.h>

int main(void) {
  int sati;
  printf("Unesite broj sati: ");
  scanf("%d", &sati);

  int minute;
  printf("Unesite broj minuta: ");
  scanf("%d", &minute);

  int sekunde;
  printf("Unesite broj sekunde: ");
  scanf("%d", &sekunde);

  int ukupanBrojSekundi;
  ukupanBrojSekundi = (sati * 3600) + (minute * 60) + sekunde;
  printf("Ukupan broj sekundi: %d\n", ukupanBrojSekundi);

  return 0;
}