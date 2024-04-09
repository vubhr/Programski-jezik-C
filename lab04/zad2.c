#include <stdio.h>

/* Napišite program koji prihvaća dva cijela broja sa standardnog ulaza s porukom
 * Molimo unesite dva cijela broja:, uspoređuje ih i ispisuje
 * prvi broj je veći/manji/jednak od drugog broja. */

int main(void) {
  int broj1;
  int broj2;

  printf("Molimo unesite dva broja: ");
  scanf("%d %d", &broj1, &broj2);

  if (broj1 < broj2) {
    printf("prvi broj je manji od drugog broja\n");
  } else if (broj1 > broj2) {
    printf("prvi broj je veći od drugog broja\n");
  } else {
    printf("prvi broj je jednak drugom broju\n");
  }

  return 0;
}