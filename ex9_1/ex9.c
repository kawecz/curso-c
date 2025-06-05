//Linguagem C - Aula 9.1 - Aprenda a criar e usar Funções e Procedimentos em C

#include <stdio.h>

float maior(float n1, float n2) {
  if(n1 > n2) {
    return n1;
  } else {
    return n2;
  }
  
}


int main() {
  float x, y, m;
  printf("Insira um valor: \n");
  scanf("%f", &x);
  printf("Insira mais um valor: \n");
  scanf("%f", &y);
  m = maior(x,y);
  printf("Maior: %.2f\n", m);
}
