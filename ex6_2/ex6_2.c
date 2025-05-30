// Aula 6.2 - Strings: trabalhando com dados de texto

#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 50

/*
int main() {
  
  char s[10];

  printf("Digite algo (scanf aprimorado): \n");
  scanf("%9[^\n]s",s);
  fflush(stdin);

  printf("Resultado: %s\n\n", s);
}
*/

/*
int main() {

  setlocale(LC_ALL, "Portuguese");

  char s[10];

  printf("Digite algo (leitura pelo gets):\n");
  fgets(s, 10, stdin);
  fflush(stdin);

  puts("Resultado:");
  puts(s);
  puts("");

}
*/

/*
int main() {
  setlocale(LC_ALL, "Portuguese");

  char  origem[N] = {"Olá, Mundo!"};
  char destino[N];

  printf("Antes do strcpy:\n");
  puts(origem);
  puts(destino);

  strcpy(destino,origem);
  
  printf("Depois do strcpy:\n");
  puts(origem);
  puts(destino);
}
*/
/*
int main() {
  setlocale(LC_ALL, "Portuguese");

  char s1[N] = {"Lógica de"};
  char s2[N] = {" Programação!"};

  printf("Antes do strcat:\n");
  printf("str1: %s\n", s1);
  printf("str2: %s\n", s2);

  strcat(s1,s2);

  printf("Depois do strcat:\n");
  puts(s1);

}
*/
/*
int main() {
  setlocale (LC_ALL, "Portuguese");

  char s[N];
  int i;

  printf("Digite um texto:\n");
  fgets(s, 49, stdin);
  i = strlen(s);
  printf("\nTamanho do texto: %d\n\n", i);

  printf("Impressão de posição a posição:\n");
  for(i = 0; i < strlen(s); i++) {
      printf("%c", s[i]);
  }
}
*/


int main() {
  setlocale(LC_ALL, "Portuguese");

  char hardText[N] = {"kawe"};
  char senha_usr[N];
  int ok;

  printf("Digite um texto:\n");
  fgets(senha_usr, 5, stdin);

  ok = strcmp(hardText, senha_usr);

  if(ok == 0) {
    printf("Textos iguais.\n");
  } else {
    printf("Textos diferentes.\n");
  }
}
