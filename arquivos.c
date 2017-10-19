#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int a, b, c;
    FILE *file;
    file = fopen("teste.txt","r");

    fscanf(file, "%i %i %i", &a, &b, &c);
    printf ("%i %i %i\n", a, b, c);
    fclose(file);
    return(0);

}
