#include <stdio.h>

//Inserindo dados pelo teclado

int main() {
	
	int idade = 0;
	int ano = 0;
	
	printf("Valor inicial da idade: %d.\n", idade);
	
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	printf("Digite o ano: \n");
	scanf("%d", &ano); 
	
	printf("Idade informada: %d. \n", idade);
	printf("Ano informado: %d. \n", ano);
}
