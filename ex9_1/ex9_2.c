#include <stdio.h>


void impreme1(int v[], int n) {
  int i;
  for(i =0; i < n; i++) {
    printf("%d", v[i]);
  }
}

void impreme2(int v[5]) {
  int i;
  for(i = 0; i < 5; i++) {
    printf("%d", v[i]);
  }
}

void impreme3(int *v, int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d", v[i]);
  }
}

int main() {
  int vet[5] = {1,2,3,4,5};

  puts("Primeiro imprime:");
  impreme1(vet, 5);

  puts("\nSegundo impreme:");
  impreme2(vet);


  impreme3(vet, 5);
  return 0;
}
