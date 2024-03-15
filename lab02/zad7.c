#include <stdio.h>

int main(void) {
  float radijus;
  printf("Unesite radijus: ");
  scanf("%f", &radijus);

  float povrsina;
  const float pi = 3.14159;
  povrsina = radijus * radijus * pi;
  printf("Povrsina: %f\n", povrsina);

  return 0;
}