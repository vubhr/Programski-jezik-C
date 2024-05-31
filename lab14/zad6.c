#include <stdio.h>

#define N 3

struct RezultatKolokvija {
  char ime[21];
  char prezime[21];
  int brojBodova;
};

void prikaziRezultat(struct RezultatKolokvija);

int main(void) {
  int i;
  struct RezultatKolokvija rezultati[N];

  for (i = 0; i < N; i++) {
    printf("Unesite ime: ");
    scanf("%s", rezultati[i].ime);
    printf("Unesite prezime: ");
    scanf("%s", rezultati[i].prezime);
    printf("Unesite broj bodova: ");
    scanf("%d", &rezultati[i].brojBodova);
  }

  for (i = 0; i < N; i++) {
    prikaziRezultat(rezultati[i]);
  }

  return 0;
}

void prikaziRezultat(struct RezultatKolokvija r) {
  printf("%s %s (%db)\n", r.ime, r.prezime, r.brojBodova);
}