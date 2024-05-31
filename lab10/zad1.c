#include <stdio.h>

int main(void) {
  int broj;
  int *p;

  p = &broj;
  broj = 12;

  printf("Adresa pokazivaca: %u\n", &p);
  printf("Adresa pokazivaca: %p\n", &p);
  printf("Vrijednost pokazivaca: %u %p\n", p, p);
  printf("Vrijednost na koju pokazuje: %d\n", *p);
  return 0;
}
