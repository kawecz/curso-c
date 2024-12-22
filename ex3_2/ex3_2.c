#include <stdio.h>

// Aula 3.2 - Aprenda a realizar cálculos em C

int main() {
	int A,B,soma,subtr,mult,divis;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d",&A);
	printf("Digite o segundo valor: \n");
	scanf("%d",&B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("Resultados: \n");
	printf("Soma: %d. \n", soma);
	printf("Sub.: %d. \n", subtr);
	printf("Mult.: %d. \n", mult);
	printf("Divis. %d.", divis);
	system("pause");
}
