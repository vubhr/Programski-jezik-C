#include <stdio.h>

int main(void) {
  int cijeli1;
  printf("Unesite prvu cjelobrojnu vrijednost: ");
  scanf("%d", &cijeli1);

  int cijeli2;
  printf("Unesite drugu cjelobrojnu vrijednost: ");
  scanf("%d", &cijeli2);

  int zbroj;
  zbroj = cijeli1 + cijeli2;
  printf("Zbroj: %d\n", zbroj);

  int razlika;
  razlika = cijeli1 - cijeli2;
  printf("Razlika: %d\n", razlika);

  int umnozak;
  umnozak = cijeli1 * cijeli2;
  printf("Umnozak: %d\n", umnozak);

  float kvocijent;
  kvocijent = cijeli1 / (cijeli2 * 1.0);
  printf("Kvocijent: %f\n", kvocijent);

  return 0;
}