#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b) {
    // Pré-condição: dois números inteiros
    // Pós-condição: o maior deles
    int m = b;
    if (a > b)
        m = a;
    return(m);
}

int maiorBL(int a, int b) {
    // Pré: dois números inteiros
    // Pós: o maior deles
    return(a > b ? a : b);
}

void imprime(){
    //Pré: nenhuma
    //Pós: imprimir mensagens
    printf("Trecho do programa concluido\n");
    printf("Teste\n");
}

void idade(int i){
    //Pré: a idade a imprimir
    //Pós: imprimir mensagem da idade
    printf("Eu tenho %i anos.\n", i);
}

int main (){
    idade(18);
    printf("%i", maior(5,9));
    imprime();
    return(0);
}
