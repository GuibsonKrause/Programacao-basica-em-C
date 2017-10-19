#include <stdio.h>
#include <stdlib.h>

int quadrado(int valor){
    valor = valor*valor;
return (valor);
}

int main (){
  int valor, resultado;

   printf("Digite um numero inteiro\n");
   scanf ("%i", &valor);

    resultado = quadrado(valor);

   printf("\nresultado: %i", resultado);

return 0;
}
