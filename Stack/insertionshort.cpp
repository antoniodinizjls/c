#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<string.h>
#define TAM 10

using namespace std;

void print(int vetor[TAM]){
    int k = 0;
    cout << "Imprimindo vetor \n";
    while(k <= 9){
        cout << vetor[k]<<"\n";
        k++;
    }
}

void insertion(int vetor[TAM]){
    int i , j , atual;

    for(i = 1; i < TAM; i++){
        //Elemento atual
        atual = vetor[i];    
        //Elemento anterior
        j = i -1;
        while( (j >= 0) && (atual < vetor[j])){
            // o elemento dá frente vai para trás
            vetor[j + 1] = vetor[j];

            j--;
        // O J vai voltando e checando os elementos anteriores
        }

        // Agora se coloca o atual
        vetor[j+1] =  atual;

    }


}


int main(){
   int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1}; 

    insertion(vetor);   
    print(vetor);
    
    return 0;
}