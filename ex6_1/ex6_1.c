// Aula 6.1 - Domine vetores (arrays) 

#include<stdio.h>
/*
int main() {
    int v[5];

    float m;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;
    printf("Resultado %.0f\n", m);

    return 0;
}
*/

/*
int main() {
    int v[5] = {10,20,30,40,50};
    int i;

    for(i = 0; i < 5;i++) {
         printf("Posição %d: %d\n", i, v[i]);
    }

    return 0;
}
*/
/*
int main() {
    int v[5] = {10,20,30,40,50};
    int i;
    double s;

    for(i = 0; i < 5; i ++) {
        s += v[i];
    }
    printf("Resultado %.0f\n", s / 5);
}
*/

int main() {
    int v[5];
    int i;

    for( i = 0; i < 5; i++) {
        printf("Insira um dado: \n");
        scanf("%d", &v[i]);
    }

    printf("Dados Inseridos: \n");
    for( i = 0; i < 5; i++) {
        if(v[i] < 0) {
            printf("Posição - %d = %d (negative)\n", i, v[i]);
        } else {
            printf("Posição - %d = %d\n", i , v[i]);
        }
    }
}