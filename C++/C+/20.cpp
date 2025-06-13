#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<iostream>
#include<string>
#include<new> //aloca memória automaticamente

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    // Definindo variáveis
    int linhas=3, colunas=3,i,j;
    int **matriz;
    matriz = (int **) malloc(linhas *sizeof(int *));
    // alocando as linhas
    for(i=0;i<linhas;i++){
        matriz[i] = (int *) malloc(colunas * sizeof(int));

    }

    for(j=0;j<linhas;j++){
        for(i=0;i<colunas;i++){
            matriz[i][j]= i;
            cout<<matriz[i][j]<<"\n";
        }

    } // imprimindo matriz
    free(matriz); // Libera a memória
    return 0;

}