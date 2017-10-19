#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTDE 4

int main() {
    int i, vet[QTDE], soma = 0;
    float media;
    for(i = 0; i < QTDE; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &vet[i]);
        soma = soma + vet[i];
    }
    media = (float)soma/QTDE;
    printf("media = %f\n", media);
    for(i = 0; i < QTDE; i++){
        if(vet[i] > media) {
            printf("%i ", vet[i]);
        }
    }
    return(0);
}
