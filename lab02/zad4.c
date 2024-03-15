#include <stdio.h>

int main(void) {
  int cijeli1;
  printf("Unesite prvu cjelobrojnu vrijednost: ");
  scanf("%d", &cijeli1);
  printf("Prva cjelobrojna vrijednost: %d\n", cijeli1);

  int cijeli2;
  printf("Unesite drugu cjelobrojnu vrijednost: ");
  scanf("%d", &cijeli2);
  printf("Druga cjelobrojna vrijednost: %d\n", cijeli2);

  float decimalni1;
  printf("Unesite prvu decimalnu vrijednost: ");
  scanf("%f", &decimalni1);
  printf("Prva decimalna vrijednost: %f\n", decimalni1);

  float decimalni2;
  printf("Unesite drugu decimalnu vrijednost: ");
  scanf("%f", &decimalni2);
  printf("Druga decimalna vrijednost: %f\n", decimalni2);

  return 0;
}