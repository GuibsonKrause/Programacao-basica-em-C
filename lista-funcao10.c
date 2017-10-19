#include <stdio.h>
#include <stdlib.h>

int epar (int n)
{
    int par, impar;
    if(n % 2 == 0)
    {
        par = n;
        printf("O numero %d e par", par);
    }
    else
    {
        impar = n;
        printf("O numero %d e impar", impar);
    }
}

int main()
{
    int teste;
    teste = epar(10);

    return (0);
}
