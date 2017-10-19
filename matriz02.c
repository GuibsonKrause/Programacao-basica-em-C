#include <stdio.h>
#include <stdlib.h>

int main(){
    int mat[4][4];
    int i, j;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%i", &mat[i][j]);
        }
    }
    //diagonal principal
    for(i = 0; i < 4; i++) {
        printf("%i\t", mat[i][i]);
    }
    //diagonal secundaria
    for(i = 0; i < 4; i++) {
        printf("%i\t", mat[i][3 - i]);
    }
    return(0);
}
