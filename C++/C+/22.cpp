#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<iostream>
#include<new>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int linhas,colunas,i=0,j;
    int **matriz;
    cout<<"Digite o tamanho da sua matriz em linhas e colunas \n";
    cin >> linhas>>colunas;
    matriz = (int **) new int[colunas];
     // tamanho de um ponteiro
    for (i=0;i<colunas;i++){
        matriz[i]= (int*) new int[linhas];
    }

    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            matriz[i][j]= j;
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