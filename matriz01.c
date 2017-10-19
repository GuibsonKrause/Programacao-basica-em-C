#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[3][4];
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &mat[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("%i\t", mat[i][j]);
        }
        printf("\n");
    }
    return(0);
}
