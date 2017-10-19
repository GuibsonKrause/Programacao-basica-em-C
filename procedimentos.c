#include <stdio.h>
#include <stdlib.h>
#include "matematica.h"

char op;
float a, b, result;

void menu(){
    printf("Escolha a operação:\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
}

void entrada(){
    scanf("%c", &op);
    printf("Digite o primeiro valor:\n");
    scanf("%f", &a);
    printf("Digite o segundo valor:\n");
    scanf("%f", &b);
}

void processamento(){
    if (op == '1')
        result = soma(a, b);
    else if (op == '2')
        result = sub(a, b);
    else if (op == '3')
        result = mult(a, b);
    else if(op == '4')
        result = divi(a, b);
}

void saida(){
    printf("%f", result);
}
