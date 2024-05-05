#include <stdio.h>
#include <math.h> // Inclua a biblioteca math.h

int main() {
  double r;
  scanf("%lf",&r);

  double pi = 3.14159;

  // Use a função pow para calcular o cubo do raio
  double volume = (4.0/3.0) * pi * pow(r, 3);

  printf("VOLUME = %.3lf\n", volume);

  return 0;
}
