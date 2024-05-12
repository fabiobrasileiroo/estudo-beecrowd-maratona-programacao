#include <stdio.h>

int main() {
  // 12 km/l
  int carro = 12;
  int tempoGastoHoras,velocidadeMediaHora;
  scanf("%d",&tempoGastoHoras);
  scanf("%d",&velocidadeMediaHora);
  float distancia = tempoGastoHoras * velocidadeMediaHora;
  float litros = distancia/carro;
  printf("%.3f",litros);
  printf("\n");
  return 0;
}