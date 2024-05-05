#include <stdio.h>
#include <math.h>
int main()
{
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("TRIANGULO: %.3lf", (a * c) / 2);
  double pi = 3.14159;
  double r = (a * b * c) / 4;
  double circuloArea = pi * pow(c, 2);

  printf("\nCIRCULO: %.3lf", circuloArea);
  printf("\nTRAPEZIO: %.3lf", (a + b) * c / 2);
  printf("\nQUADRADO: %.3lf", pow(b, 2));
  printf("\nRETANGULO: %.3lf", a * b);
  printf("\n");
  return 0;
}