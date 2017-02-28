#include <stdio.h>

int main()
{
  int a, b;
  float c, d;

  a = 13;
  b = 5;

  c = a / b;
  d = (float) a / (float) b;

  printf("[integers]\ta = %d\tb = %d\n", a, b);
  printf("[floats]\tc = %f\td = %f\n", c, d);
}
