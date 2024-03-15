#include <stdio.h>

int main(void) {
  int a;
  a = 30000;
  printf("%d\n", a);

  short b;
  b = -5;
  printf("%hd\n", b);

  char c;
  c = 'D';
  printf("%d\n", c);
  printf("%c\n", c);

  float d;
  d = 3.14;
  printf("%f\n", d);

  double e;
  e = 3.14159;
  printf("%lf\n", e);

  return 0;
}