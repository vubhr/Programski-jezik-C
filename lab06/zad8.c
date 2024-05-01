#include <stdio.h>

/* Izradite program koji omogućava unos proizvoljnog broja cjelobrojnih elemenata n (1-100) u polje.
 * Izmijenite polje tako da sve unesene 0 prebacite iza svih drugih unesenih vrijednosti. 
 * Prikažite sve elemente polja.
 */

#define N 100

int main(void) {
  int polje[N];
  int n;
  int brNula;
  
  int i;
  int j;

  int tmp;

  n = 0;
  while (1) {
    printf("Unesite n: ");
    scanf("%d", &n);
    if (n < 1 || n > 100) {
      printf("Neispravan unos\n");
    } else {
      break;
    }
  }

  for (i = 0; i < n; i++) {
    printf("Unesite %d. broj: ", i + 1);
    scanf("%d", &polje[i]);
  }

  brNula = 0;
  for (i = 0; i < n - 1 - brNula;) {
    if (polje[i] == 0) {
      // trenutni element je nula, moramo je "potjerati" na kraj polja
      for (j = i; j < n - 1 - brNula; j++) {
        tmp = polje[j];
        polje[j] = polje[j + 1];
        polje[j + 1] = tmp;
      }
      // pronasli smo nulu, skracujemo si polje potrebno za pretraziti za 1
      // svaki put kad pronademo nulu, skracujemo si polje za 1 jer su te nule
      // na kraju
      brNula++;
    } else {
      i++; // trenutni element nije nula, moramo nastaviti dalje
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d ", polje[i]);
  }
  
  return 0;
}