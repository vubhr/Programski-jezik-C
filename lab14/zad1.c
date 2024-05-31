#include <stdio.h>

struct Knjiga {
  int oznaka;
  char autor[51];
  char naslov[51];
};

int main(void) {
  struct Knjiga k1 = { 132, "Douglas Adams", "The Hitchhiker's Guide to the Galaxy" };
  struct Knjiga k2 = { 133, "George Orwell", "1984" };

  printf("%d: %s, %s\n", k1.oznaka, k1.autor, k1.naslov);
  printf("%d: %s, %s\n", k2.oznaka, k2.autor, k2.naslov);

  return 0;
}