#include <stdio.h>

//Atruibuições Aritméticas.

int main() {
	int dado = 10;
	
	printf("Dado antes do incremento: %d \n", dado);
	
	dado++;
	printf("Dado depois do incremento: %d. \n",dado);
	
	dado--;
	printf("Dado depois do decremento: %d. \n", dado);
	
	dado+=3;
	printf("Dado depois do incremento em 3 unidades: %d. \n", dado);
	
	dado -= 2;
	printf("Dado depois do decremento em 2 unidades: %d. \n", dado);
	
	dado *= 10;
	printf("Dado depois de multiplicar por 10: %d \n", dado);
	
	system("pause");
}
