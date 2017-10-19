#include <stdlib.h>
#include <stdio.h>

float m;

//Exercício 01
float volume(float r){
    //Pré: o raio
    //Pós: o volume da esfera
    return(4*3.141592654*r*r*r/3);
}

//Exercício 02
void media(float n1, float n2, float n3, char op){
    //Pré: 3 notas e o tipo de média
    //Pós: a média aritmetica, caso op = 'a', a média ponderada pelos pesos
    //5, 3 e 2 caso op = 'p' e a média harmônica, caso op = 'h'
    if (op == 'a')
        m = (n1 + n2 + n3)/3;
    else if (op == 'p')
        m = (5*n1 + 3*n2 + 2*n3)/10;
    else if (op == 'h')
        m = 1/((1/n1 + 1/n2 + 1/n3)/3);
}

//Exercício 3
int primo(int n){
    //Pré: numero inteiro
    //Pós: 1, se for primo, 0, caso contrário
    int i, d = 0;
    for(i = 1; i <= n; i++)
        if (n % i == 0)
            d++;
    return(d <= 2 ? 1 : 0);
}

int main(){
    printf("Volume da esfera: %f", volume(5));
    media(3, 4, 9, 'a');
    printf("\nMedia aritmética: %f", m);
    media(3, 4, 9, 'p');
    printf("\nMedia ponderada: %f", m);
    media(3, 4, 9, 'h');
    printf("\nMedia harmônica: %f", m);
    printf("\n7 é primo? %i", primo(7));
    printf("\n6 é primo? %i", primo(6));
}
