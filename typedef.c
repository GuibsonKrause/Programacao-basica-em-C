#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define t 2

typedef struct f
{
    char nome[100];
    int mat;
    float notas[3];
} ficha;

int main ()
{
    ficha alunos[t];
    int i, j;
    for (i = 0; i < t; i++)
    {
        printf("Digite um nome\n");
        scanf("%s", & alunos[i].nome);
        printf("Digite a matricula\n");
        scanf("%i", & alunos[i].mat);
        for (j = 0; j < 3; j++)
        {
            printf("Digite as notas\n");
            scanf("%f", &alunos[i].notas[j]);
        }

    }

        for (i = 0; i < t; i++)
    {
        printf("\n\n%s\n",  alunos[i].nome);
        printf("%i\n",  alunos[i].mat);
        for (j = 0; j < 3; j++)
        {
            printf("%.2f\t", alunos[i].notas[j]);
        }

    }
}
