#include <stdio.h>

/* Izradite program koji učitava brojeve s tipkovnice sve dok se ne unese broj 0.
 * Prikazati maksimalni i minimalni uneseni broj. (Broj 0 se ne smije uračunavati
 * kao minimalni/maksimalni broj).
 */

int main(void) {
  int broj;
  int maksimum;
  int minimum;

  printf("Unesite broj: ");
  scanf("%d", &broj);

  maksimum = broj;
  minimum = broj;

  while (1) {
    printf("Unesite broj: ");
    scanf("%d", &broj);
    if (broj == 0) {
      break;
    }
    if (broj > maksimum) maksimum = broj;
    if (broj < minimum) minimum = broj;
  }
  
  printf("Maksimum: %d\n", maksimum);
  printf("Minimum: %d\n", minimum);

  return 0;
}