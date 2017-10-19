#include <stdio.h>
#include <stdlib.h>

int a, b, c;

void entrada(){
    //Pré: nenhuma
    //Pós: ler dois números
    scanf("%i", &a);
    scanf("%i", &b);
}

void processamento(){
    //Pré: nenhuma
    //Pós: somar dois números
    c = a + b;
}

void saida(){
    //Pré: nenhuma
    //Pós: imprimir a soma
    printf("%i", c);
}

int main (){
    entrada();
    processamento();
    saida();
    return(0);
}
