#include <stdio.h>

int main() {
  // entrada 3 valores e saida maior valor
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int maior = a;
  if(maior < b) {
    maior = b;
  } else if(maior < c ) {
    maior = c;
  }
  printf("%d eh o maior",maior);
  printf("\n");
  return 0;
}