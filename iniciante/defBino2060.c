#include <stdio.h>

int main() {
  int qntNum;
  scanf("%d",&qntNum);
  int num[qntNum];
  int c2=0,c3=0,c4=0,c5=0;
  for(size_t i =0;i<qntNum;i++) {
    scanf("%d",&num[i]);
    if(num[i] % 2 ==0 ) {
      c2++;  
    } 
    if(num[i] % 3 ==0 ) {
      c3++;
    }
     if(num[i] % 4 ==0 ) {
      c4++;
     }
     if(num[i]% 5 ==0) {
      c5++;
    }
  } 
  printf("%d Multiplo(s) de 2",c2);
  printf("\n%d Multiplo(s) de 3",c3);
  printf("\n%d Multiplo(s) de 4",c4);
  printf("\n%d Multiplo(s) de 5",c5);
  printf("\n");
  return 0;
}