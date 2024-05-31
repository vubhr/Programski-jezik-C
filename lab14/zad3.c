#include <stdio.h>

struct Knjiga {
  int oznaka;
  char autor[51];
  char naslov[51];
};

void prikaziKnjigu(struct Knjiga k) {
  printf("%d: %s, %s\n", k.oznaka, k.autor, k.naslov);
}

int main(void) {
  struct Knjiga k1;
  struct Knjiga k2;

  printf("Unesite oznaku knjige: ");
  scanf("%d", &k1.oznaka);
  printf("Unesite autora knjige: ");
  scanf("%s", k1.autor);
  printf("Unesite naslov knjige: ");
  scanf("%s", k1.naslov);

  printf("Unesite oznaku knjige: ");
  scanf("%d", &k2.oznaka);
  printf("Unesite autora knjige: ");
  scanf("%s", k2.autor);
  printf("Unesite naslov knjige: ");
  scanf("%s", k2.naslov);

  prikaziKnjigu(k1);
  prikaziKnjigu(k2);
  
  return 0;
}