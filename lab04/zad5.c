#include <stdio.h>

/* Napisati program koji će s tipkovnice učitati dva realna broja x i y. 
 * Ispisati poruku Istina je ako je barem jedan od brojeva u zatvorenom
 * intervalu[5,20]i pri tome je x manji od y. Inače,ispisati poruku Nije istina.
 */

int main(void) {
  float x;
  float y;

  printf("Molimo unesite dva realna broja: ");
  scanf("%f %f", &x, &y);

  if ((x < y) && ((x >= 5 && x <= 20) || (y >= 5 && y <= 20))) {
    printf("Istina je\n");
  } else {
    printf("Nije istina\n");
  }

  return 0;
}