#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* slucajan(int pocetak, int kraj);

int main(void) {
  int *slucajanBroj;

  srand(time(0));
  slucajanBroj = slucajan(10, 20);

  if (slucajanBroj != NULL) {
    printf("Slucajan broj: %d\n", *slucajanBroj);
    
    free(slucajanBroj);
    slucajanBroj = NULL;
  }

  return 0;
}

int* slucajan(int pocetak, int kraj) {
  int *broj;

  broj = (int*)malloc(sizeof(int));
  
  if (broj == NULL) {
    return NULL;
  }
  *broj = (rand() % (kraj - pocetak)) + pocetak;
  return broj;
}