#include <bits/stdc++.h>
using namespace std;
int main() {
  int valor;
  std::vector<int> notas = {100, 50, 20, 10, 5, 2, 1};
  std::vector<int> quantidade(7,0);

  std::cin >> valor;
  std::cout << valor <<std::endl;
  for (int i = 0; i<7;i++) {
    quantidade[i]= valor/notas[i];
    valor =valor % notas[i];
  }

  for (int i = 0; i< 7;i++) {
    std::cout << quantidade[i] << " nota(s) de R$ " << notas[i] << ",00" << std::endl;
  }
  return 0;
}