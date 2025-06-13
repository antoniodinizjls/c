#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int vetor[5], i = 0, j = 0;
    int aux = 0;
    
    for(i = 0; i<5; i++){
        vetor[i] = i;
    }


    for(i = 0; i<=4; i++){
        for(j = 0; j<=4; j++){
            if(vetor[i] < vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;

            }
        }
    }
    cout << " Linha decrescente \n";
   
    for (i = 0; i<=4 ; i++){
        cout << vetor[i] << "\n";
    }


    return 0;
}