#include <stdio.h>
int main() {
  int distanciaTotalPercorridaKm;
  float totalDeCombustivelGasto;// 1 casa decimal
  scanf("%d",&distanciaTotalPercorridaKm);
  scanf("%f",&totalDeCombustivelGasto);
  float kmL = (float)(distanciaTotalPercorridaKm /totalDeCombustivelGasto);
  printf("%.3f km/l",kmL);
  printf("\n");
  return 0;
}