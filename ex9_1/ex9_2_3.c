#include <stdio.h>

float maior(float n1, float n2);

int main() {
  float x,y,m;

  printf("Insira um valor:\n");
  scanf("%f", &x);
  printf("Insira outro valor: \n");
  scanf("%f", &y);

  m = maior(x,y);
  printf("Maior numero: %.0f\n", m);
}


float maior(float n1, float n2) {
  if(n1 > n2) {
    return n1;
  } else {
    return n2;
  }
}
