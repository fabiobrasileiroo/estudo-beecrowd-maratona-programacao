#include <stdio.h>
int main() {
  // 3 valores linha 2 inteiros 1 com 2 duas casas decimais
  // cod peca, numero peca, valor unitario peca
  // depois calcular mostrar o valor a ser pago
  int codPeca[2],numPecas[2];
  float valorUni[2];
  float soma;
  for(int i = 0; i < 2;i++) {
    scanf("%d %d %f",&codPeca[i],&numPecas[i],&valorUni[i]);
    soma += valorUni[i] * numPecas[i];
  }

  printf("VALOR A PAGAR: R$ %.2f",soma);
  printf("\n");
  return 0;
}