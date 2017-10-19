#include <stdio.h>
#include <stdlib.h>
#define QTDE 4

int main(){
    int i, n[QTDE];
    float soma = 0.0;
    for(i = 0; i <= QTDE; i++){
        scanf("%i", &n[i]);
        soma = soma + n[i];
    }
    printf("%f\n", soma/QTDE);
    for(i = 0; i < QTDE; i++)
        printf("%i ", n[i]);
    return(0);
}
