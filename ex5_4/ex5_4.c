// Aula 5.4 - Conheça os comandos de Controle de Fluxo break e continue

#include<stdio.h>

/* 
int main() {

    int i;

    for(i = 1; i <= 10; i++) {
        printf("%d\n", i);
        if(i == 5){
            break;
        }
    }
 
}
*/

int main() {
    int i;
    
    for(i = 1; i <= 10; i++) {
        
        if(i == 5 ) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}