#include <stdio.h>

/* Napisati program koji će s tipkovnice učitati pet decimalnih brojeva.
 * Ako su barem tri od učitanih brojeva veći od nule, ispisati poruku
 * Barem tri su veca od nule, inače ispisati poruku Niti tri nisu veca od nule.
 */

int main(void) {
  float broj1;
  float broj2;
  float broj3;
  float broj4;
  float broj5;
  int brojVecihOdNule;

  printf("Molimo unesite pet decimalnih brojeva: ");
  scanf("%f %f %f %f %f", &broj1, &broj2, &broj3, &broj4, &broj5);

  brojVecihOdNule = 0;
  if (broj1 > 0) brojVecihOdNule++;
  if (broj2 > 0) brojVecihOdNule++;
  if (broj3 > 0) brojVecihOdNule++;
  if (broj4 > 0) brojVecihOdNule++;
  if (broj5 > 0) brojVecihOdNule++;

  if (brojVecihOdNule >= 3) {
    printf("Barem tri su veca od nule\n");
  } else {
    printf("Niti tri nisu veca od nule\n");
  }

  return 0;
}