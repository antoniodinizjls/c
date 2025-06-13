#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define LINHA 2
#define COLUNA 3

int main(){
    
    int mat[LINHA][COLUNA]={{1,2,3},{4,5,6}},i=0,j=0;
    
    setlocale(LC_ALL,"");
    
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("%i",mat[i][j]);

        }
    }

    return 0;
}