#include <stdio.h>
#include <stdlib.h>

#define N 10

int* izradiPolje(int brojElemenata);
void prikaziPolje(int *polje, int brojElemenata);

int main(void) {
  int *mojePolje;

  mojePolje = izradiPolje(N);
  if (mojePolje) {
    prikaziPolje(mojePolje, N);

    free(mojePolje);
    mojePolje = NULL;
  }

  return 0;
}

int* izradiPolje(int brojElemenata) {
  int *polje;

  polje = (int*)calloc(brojElemenata, sizeof(int));
  
  return polje;
}

void prikaziPolje(int *polje, int brojElemenata) {
  int i;

  for (i = 0; i < brojElemenata; i++) {
    printf("%d ", polje[i]);
  }
}
