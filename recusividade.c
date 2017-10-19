#include <stdio.h>
#include <stdlib.h>

 int imprime(int inicio, int limite){
    if (inicio<limite){
     printf("%i\n", inicio);
     imprime (inicio+1, limite);

    }
 }

 int main (){
     int inicio, limite, i;

     inicio = 10;
     limite = 20;
     printf("\n\nImpressao Interativa\n");
     for (i=inicio;i<limite;i++){
        printf("%i\n", i);
     }
     printf("\n\nImpressao Recursiva\n");
     imprime(inicio, limite);

return 0;
 }
