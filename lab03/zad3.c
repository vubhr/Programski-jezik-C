#include <stdio.h>

/* Izradite program koji će za unesenu cijenu određenog artikla ispisati porez te ukupnu cijenu artikla
 * (cijena + porez). Sve vrijednosti prikažite na dvije decimale. Pomoću #define preprocesorske direktive
 * omogućite jednostavnu promjenu porezne stope. Program također mora prikazati vrijednost porezne stope
 * kao što je prikazano u primjeru izgleda programa. Očekuje se da će porezna stopa uvijek biti
 * dvoznamenkasta vrijednost.
 */

#define POREZNA_STOPA 25

int main(void) {
  float cijena;
  float porez;

  printf("Unesite cijenu artikla: ");
  scanf("%f", &cijena);

  porez = cijena * (POREZNA_STOPA / 100.0);

  printf("-----------------------------\n");
  printf("Cijena: %18.2f kn\n", cijena);
  printf("Porez (%d%%): %13.2f kn\n", POREZNA_STOPA, porez);
  printf("-----------------------------\n");
  printf("Ukupno: %18.2f kn\n", cijena + porez);

  return 0;
}