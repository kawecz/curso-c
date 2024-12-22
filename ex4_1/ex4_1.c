#include <stdio.h>

// Aula 4.1 - Domine o comando IF em C

int main () {

	float m;
	
	printf("Insira uma nota: \n");
	scanf("%f", &m);
	
	if(m > 7.0) {
		printf("Aprovado(a)!");
	} else {
		printf("melhore!");
	}
}
