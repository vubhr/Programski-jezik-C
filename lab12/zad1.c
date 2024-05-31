#include <stdio.h>
#include <string.h>
#include <ctype.h>

int prebrojiNegativne(int*, int);

int main(void) {
  int brojevi[] = { 2, -8, 4, -5, 1, 9 };
  int negativnih;

  negativnih = prebrojiNegativne(brojevi, sizeof(brojevi) / sizeof(*brojevi));

  printf("Broj negativnih: %d\n", negativnih);

  return 0;
}

int prebrojiNegativne(int *polje, int n) {
  int negativnih = 0;

  for (int i = 0; i < n; i++) {
    if (polje[i] < 0) {
      negativnih++;
    }
  }

  return negativnih;
}

