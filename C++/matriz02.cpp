#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define LINHA 2
#define COLUNA 2

int main(){
    
    int matriz[LINHA][COLUNA],i,j,m,n;
    
    setlocale(LC_ALL,"");
    printf("Depois do for digite as notas do aluno\n");

    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Digite a nota do aluno \n");
            scanf("%i",&matriz[i][j]);

        }
    }
    // printf("Notas %i",matriz[1][0]);
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Notas %i",matriz[i][j]);
            printf("\n");
        }
    }
    return 0;
}