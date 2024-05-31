#include <stdio.h>

#define N 3

struct RezultatKolokvija {
  char ime[21];
  char prezime[21];
  int brojBodova;
};

void prikaziRezultat(struct RezultatKolokvija);
void prolazak(struct RezultatKolokvija[], int);

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

  prolazak(rezultati, 10);

  return 0;
}

void prikaziRezultat(struct RezultatKolokvija r) {
  printf("%s %s (%db)\n", r.ime, r.prezime, r.brojBodova);
}

void prolazak(struct RezultatKolokvija r[], int prag) {
  int i;

  for (i = 0; i < N; i++) {
    if (r[i].brojBodova >= prag) {
      prikaziRezultat(r[i]);
    }
  }
}