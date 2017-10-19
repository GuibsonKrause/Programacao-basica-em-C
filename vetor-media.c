#include <stdio.h>
#include <stdlib.h>


int main ()
{
    int i;
    float notas[5];
    float soma;
    float media;

    printf("Digite 5 notas\n");

    for(i = 0; i < 5; i++)
    {
        scanf ("%f", &notas[i]);
    }
    for( i = 0; i < 5; i++)
    {
        soma = soma + notas[i];
    }
    media = soma / 5;
    printf("%.2f", media);

    return (0);
}
