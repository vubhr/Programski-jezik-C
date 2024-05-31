#include <stdio.h>

struct knjiga {
  int oznaka;
  char autor[51];
  char naslov[51];
};

int main(void) {
  struct knjiga k1;
  struct knjiga k2;

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

  printf("%d: %s, %s\n", k1.oznaka, k1.autor, k1.naslov);
  printf("%d: %s, %s\n", k2.oznaka, k2.autor, k2.naslov);

  return 0;
}