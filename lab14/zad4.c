#include <stdio.h>

struct Tocka {
  int x;
  int y;
};

void prikaziTocku(struct Tocka t);

int main(void) {
  struct Tocka t1;
  struct Tocka t2;

  printf("Unesite X prve tocke: ");
  scanf("%d", &t1.x);
  printf("Unesite Y prve tocke: ");
  scanf("%d", &t1.y);

  printf("Unesite X druge tocke: ");
  scanf("%d", &t2.x);
  printf("Unesite Y druge tocke: ");
  scanf("%d", &t2.y);

  prikaziTocku(t1);
  prikaziTocku(t2);

  return 0;
}

void prikaziTocku(struct Tocka t) {
  printf("(%d,%d)", t.x, t.y);
}
