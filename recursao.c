#include <stdio.h>
#include <stdlib.h>

int fat(int n){
    //Pré: número inteiro não negativo
    //Pós: o fatorial do número
    if(n == 1 || n == 0)
        return(1);
    else
        return(n * fat(n - 1));
}

int somat(int n){
    //Pré: número inteiro maior que zero
    //Pós: o somatório de 1 até o número
    if(n == 1)
        return(1);
    else if (n == 2)
        return(1);
    else
        return(fib(n - 1));
}

int fib(int n){
    //Pré: número inteiro maior que zero
    //Pós: o n-ésimo termo de Fibonacci
    if(n == 1)
        return(1);
    else if(n == 2)
        return(1);
    else
        return(fib(n - 1) + fib(n - 2));
}

int ricci(int r1, int r2, int n){
    //Pré: primeiro e segundo números de Ricci e o termo
    //     desejado
    //Pós: o n-ésimo termo de Ricci
    if(n == 1)
        return(r1);
    else if(n == 2)
        return(r2);
    else
        return(ricci(r1, r2, n - 1) + ricci(r1, r2, n - 2));
}

int fet(int r1, int r2, int n){
    //Pré: primeiro e segundo números de Fetuccine e o termo
    //     desejado
    //Pós: o n-ésimo termo de Fetuccine
    if(n == 1)
        return(r1);
    else if(n == 2)
        return(r2);
    else
        if (n % 2 != 0)
            return(fet(r1, r2, n - 1) + fet(r1, r2, n - 2));
        else
            return(fet(r1, r2, n - 1) - fet(r1, r2, n - 2));
}


int pow(int k, int n){
    //Pré: uma base k e um expoente n
    //Pós: o valor de k elevado a n
    if(n == 0)
        return(1);
    else if(n == 1)
        return(k);
    else
        return(k * pow(k, n - 1));
}

int sf(int n){
    //Pré: número inteiro não negativo
    //Pós: o superfatorial do número
    if(n == 1)
        return(1);
    else
        return(fat(n) * sf(n - 1));
}

int main(){
    printf("%i\n", fat(5));
    printf("%i\n", somat(5));
    printf("%i\n", fib(10));
    printf("%i\n", ricci(2, 7, 6));
    printf("%i\n", fet(3, 6, 8));
    printf("%i\n", pow(2, 3));
    printf("%i\n", sf(4));
    return(0);
}
