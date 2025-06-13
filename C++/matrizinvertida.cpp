#include<stdio.h> 
#include<stdlib.h> 
#include<locale.h> 
#define LINHA 2 
#define COLUNA 2

int main(){
    int matriz[LINHA][COLUNA],i,j,m,n,aux;

    int matrizinvertida[LINHA][COLUNA];
    
    setlocale(LC_ALL,"");
    
    printf("Depois do for digite as notas do aluno\n");
    
    for(i=0;i<LINHA;i++){
        for(j=0;j<COLUNA;j++){
            printf("Digite a nota do aluno \n");
            scanf("%i",&matriz[i][j]);
    
        }
    }
    // for (int i=0;i<LINHA;i++){  
    //     for(int j=0;j<COLUNA;j++){
    //         matrizinvertida[LINHA-1-i][j]= matriz[i][j];           
    //     }
    // }
    for (int i = 0; i < LINHA; i++){
        for (int j = 0;j < COLUNA; j++) {
            matrizinvertida[LINHA-1-i][j] = matriz[i][j];
            //Ex1: 2-1-0 2-1-0 1,1 0,0
            //
            //
        }
    }
    for(i=0;i<LINHA;i++){
    
        for(j=0;j<COLUNA;j++){
            printf("%i",matrizinvertida[i][j]);
        }
        printf(" \n");
    }
    return 0;
}