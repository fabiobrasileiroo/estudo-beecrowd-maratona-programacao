// #include <stdio.h>

// int main() {
//   double flutuacaoDoPib;
//   double anosAnalisados;
//   scanf("%lf %lf",&flutuacaoDoPib,&anosAnalisados);
//   float flutuacao = (1 + flutuacaoDoPib/100) * (1 + anosAnalisados/100) -1;
//   flutuacao *=100;
//   printf("%.6lf\n",flutuacao);
//   return 0;
// }
#include <stdio.h>

int main() {
    double F1, F2, flutuacao;

    scanf("%lf %lf", &F1, &F2);

    // Calcular a flutuação do PIB no período todo dos dois anos analisados
    flutuacao = (1 + F1/100) * (1 + F2/100) - 1;
    flutuacao *= 100;

    printf("%.6lf\n", flutuacao);

    return 0;
}
