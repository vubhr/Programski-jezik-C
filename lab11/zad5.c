#include <stdio.h>
#include <stdlib.h>

int* izradiPolje(int brojElemenata);
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

    prikaziPolje(mojePolje, n);

    free(mojePolje);
    mojePolje = NULL;
  }

  return 0;
}

int* izradiPolje(int brojElemenata) {
  return (int*)calloc(brojElemenata, sizeof(int));
}

void prikaziPolje(int *polje, int brojElemenata) {
  for (int i = 0; i < brojElemenata; i++) {
    printf("%d ", polje[i]);
  }
}
