#include <stdio.h>

/* Izradite program koji prikazuje sve parne brojeve od 0 do 100.
 */

int main(void) {
  int i;

  for (i = 0; i <= 100; i = i+2) {
    printf("%d ", i);
  }

  return 0;
}