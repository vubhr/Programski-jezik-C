#include <stdio.h>

/* Izradite program koji omogućava unos ukupnog broja sekundi. Nakon unosa, program mora
prikazati koliko je to dana, sati, minuta i sekundi.
Izgled programa:
Unesite broj sekundi : 125000
-----------------------------
Rezultat : 1d 10h 43m 20s
*/

int main(void) {
  int dani;
  int sati;
  int minute;
  int sekunde;

  printf("Unesite broj sekundi: ");
  scanf("%d", &sekunde);

  dani = sekunde / 86400;
  sekunde = sekunde % 86400;

  sati = sekunde / 3600;
  sekunde = sekunde % 3600;

  minute = sekunde / 60;
  sekunde = sekunde % 60;

  printf("Rezultat: %dd %dh %dm %ds\n", dani, sati, minute, sekunde);

  return 0;
}
