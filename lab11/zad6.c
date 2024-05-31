#include <stdio.h>
#include <stdlib.h>

int* izradiPolje(int brojElemenata);
int* izmijeniPolje(int *polje, int *n);
void prikaziPolje(int *polje, int brojElemenata);

int main(void) {
  int *mojePolje;
  int n;
  int i;

  printf("Unesite broj elemenata: ");
  scanf("%d", &n);

  mojePolje = izradiPolje(n);
  if (mojePolje) {
    for (i = 0; i < n; i++) {
      printf("Unesite %d. element: ", i + 1);
      scanf("%d", &mojePolje[i]);
    }

    mojePolje = izmijeniPolje(mojePolje, &n);
    if (mojePolje == NULL) {
      return 0;
    }

    prikaziPolje(mojePolje, n);

    free(mojePolje);
    mojePolje = NULL;
  }

  return 0;
}

int* izradiPolje(int brojElemenata) {
  return (int*)calloc(brojElemenata, sizeof(int));
}

int* izmijeniPolje(int *polje, int *n) {
  int i;
  int negativnih;

  negativnih = 0;
  for (i = 0; i < *n; i++) {
    if (polje[i] < 0) {
      negativnih++;
    }
  }

  polje = (int*)realloc(polje, (*n + negativnih) * sizeof(int));
  if (polje == NULL) {
    return NULL;
  }

  for (i = *n; i < (*n + negativnih); i++) {
    polje[i] = 0;
  }

  *n = *n + negativnih;

  return polje;
}

void prikaziPolje(int *polje, int brojElemenata) {
  int i;

  for (i = 0; i < brojElemenata; i++) {
    printf("%d ", polje[i]);
  }
}
