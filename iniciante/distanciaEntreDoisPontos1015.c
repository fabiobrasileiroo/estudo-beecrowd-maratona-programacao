#include <stdio.h>
#include <math.h>

int main() {
  // 4 valores eixos x e y 
  float x1, y1, x2, y2;
  scanf("%f %f",&x1,&y1);
  scanf("%f %f",&x2,&y2);
  double distanciaDeDoisPontos = sqrt(pow((x2 - x1),2) +pow((y2 - y1),2));
  printf("%.4lf",distanciaDeDoisPontos);
  printf("\n");
  return 0;
}