#include <stdio.h>

struct Tocka {
  int x;
  int y;
};

void prikaziTocku(struct Tocka t);
struct Tocka zbrojiTocke(struct Tocka t1, struct Tocka t2);

int main(void) {
  struct Tocka t1;
  struct Tocka t2;
  struct Tocka rezultat;

  printf("Unesite X prve tocke: ");
  scanf("%d", &t1.x);
  printf("Unesite Y prve tocke: ");
  scanf("%d", &t1.y);

  printf("Unesite X druge tocke: ");
  scanf("%d", &t2.x);
  printf("Unesite Y druge tocke: ");
  scanf("%d", &t2.y);

  rezultat = zbrojiTocke(t1, t2);
  prikaziTocku(rezultat);
  
  return 0;
}

void prikaziTocku(struct Tocka t) {
  printf("(%d,%d)", t.x, t.y);
}

struct Tocka zbrojiTocke(struct Tocka t1, struct Tocka t2) {
  struct Tocka t;

  t.x = t1.x + t2.x;
  t.y = t1.y + t2.y;

  return t;
}