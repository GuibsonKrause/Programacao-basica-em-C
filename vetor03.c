#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTDE 4

int main() {
    int i;
    float p[QTDE], a[QTDE], imc;
    for(i = 0; i < QTDE; i++){
        printf("Digite o peso do aluno %i: ", i + 1);
        scanf("%f", &p[i]);
        printf("Digite a altura do aluno %i: ", i + 1);
        scanf("%f", &a[i]);
    }
    printf("peso\taltura\timc\n");
    for(i = 0; i < QTDE; i++){
        imc = p[i]/(a[i] * a[i]);
        printf("%.1f\t%.2f\t%.4f\n", p[i], a[i], imc);
    }

    return(0);
}
