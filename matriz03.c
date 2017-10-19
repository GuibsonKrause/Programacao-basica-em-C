#include <stdio.h>
#include <stdlib.h>
#define L 5
#define C 3

int main(){
    int mat[L][C];
    int i, j, soma = 0, somat = 0;
    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            scanf("%i", &mat[i][j]);
        }
    }
    for(i = 0; i < L; i++) {
        for(j = 0; j < C; j++) {
            soma = soma + mat[i][j];
        }
        printf("soma da linha: %i\n", soma);
        somat = somat + soma;
        soma = 0;
    }
    printf("soma total: %i\n", somat);
    return(0);
}
