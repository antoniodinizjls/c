#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<iostream>
#include<string>
#include<new>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int **matriz;
    int i=0,j=0,linhas,colunas;
    cout<<"Digite o número de linhas e depois colunas \n";
    cin >> linhas>>colunas;
    matriz = (int **) malloc(linhas * sizeof(int *));
    for(i=0;i<colunas;i++){
        matriz[i]= (int*) malloc(colunas * sizeof(int *));
    }
    
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            matriz[i][j]=j;

        }
    }
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            cout<< matriz[i][j];

        }
        cout<<"\n";

    }

    return 0;
}