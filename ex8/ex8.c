// Aula 8 - Estude Structs (registros)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define  TAM 3
/*
struct tipo_pessoa {
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  //criando e inicializando
  tipo_pessoa pes = {0,0.0, "Teste"};

  printf("Início:\n");
  printf("pes.idade: %d\n",pes.idade);
  printf("pes.peso: %.2f\n",pes.peso);
  printf("pes.nome: %s\n",pes.nome);

  //atribuindo valoes aos campos
  pes.idade = 10;
  pes.peso = 99.99;
  strcpy(pes.nome, "Kawê");

  printf("\n Alterando os campos via código:\n");
  printf("pes.idade:%d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);
  
  //Solicitando inserções via teclado

  printf("\n Insira um número inteiro:\n");
  scanf("%d", &pes.idade);
  printf("Insira um número real:\n");
  scanf("%f", &pes.peso);
  fflush(stdin);
  printf("Insira um nome:\n");
  scanf("%s", pes.nome);

  printf("\n Alterando com os dados do usuário:\n");
  printf("pes.idade:%d\n", pes.idade);
  printf("pes.peso: %.2f\n", pes.peso);
  printf("pes.nome: %s\n", pes.nome);

}
*/


struct tipo_pessoa {
  int idade;
  float peso;
  char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa; 

int main() {
  setlocale(LC_ALL, "Portuguese");

  tipo_pessoa lista [TAM];
  int i;

  for (i = 0; i < TAM; i++) {
    printf("Insira os dados (%d):\n", i+1);
    puts("Nome: ");
    scanf(" %50[^\n]s", lista[i].nome);
    fflush(stdin);

    puts("Idade: ");
    scanf("%d", &lista[i].idade);
    fflush(stdin);

    puts("Peso: ");
    scanf("%f", &lista[i].peso);
    fflush(stdin);
  }
  system("clear");
  
  puts("Seus dados: \n");
  for(i = 0; i < TAM; i++) {
    printf("--------------- Pessoa %d ----------------- \n", i + 1);
    printf("\tNome: %s\n", lista[i].nome);
    printf("\tIdade: %d\n", lista[i].idade);
    printf("\tPeso: %.2f\n", lista[i].peso);
  }
  printf("-----------------------------------\n");
}
