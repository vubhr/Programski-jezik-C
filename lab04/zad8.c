#include <stdio.h>

/* Izradite program koji će omogućiti pretvorbu temperature iz jedne mjerne jedinice
 * u drugu. Program mora prikazati izbornik u kojem se može odabrati željena pretvorba:
 * Pretvorba  temperature
 * 
 * Izbornik:
 * 1.  Fahrenheit u Celzius
 * 2.  Celzius u Fahrenheit
 * Upisite  Vas  odabir: 1
 * Unesite  vrijednost u F: 70
 * Vrijednost u Celziusima: 21.1 C
 * Ukoliko korisnik prilikom odabira upiše broj koji nije jednak 1 ili 2, program mora prikazati
 * Neispravan unos te izvođenje programa završava
 */

int main(void) {
  float f;
  float c;
  int izbor;

  printf("Pretvorba temperature\n\n");
  printf("Izbornik:\n");
  printf("1. Fahrenheit u Celzius\n");
  printf("2. Celzius u Fahrenheit\n");
  printf("Upisite Vas odabir: ");
  scanf("%d", &izbor);

  switch (izbor) {
    case 1:
      printf("Unesite vrijednost u F: ");
      scanf("%f", &f);
      printf("Vrijednost u Celzijusima: %.1f C",  (f - 32) / 1.8);
      break;

    case 2:
      printf("Unesite vrijednost u C: ");
      scanf("%f", &c);
      printf("Vrijednost u Fahrenheitima: %.1f F",  c * 1.8 + 32);
      break;

    default:
      printf("Neispravan unos");
      break;
  }

  return 0;
}