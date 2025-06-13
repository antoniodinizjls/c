#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int vetor[10];
    int  i  = 10, k = 0, j = 0, atual = 0;
    
    for(i  = 0; i <=9; i++){
        vetor[i] = 10 - i;

    }
    // for( i = 0; i<=9; i++){
    //     cout << vetor[i] << endl;
    // }
    for(i = 0; i<=9; i++){
        vetor[i] = atual;
        k = i -1;
        while((k>=0) && atual < vetor[i]){

        }
    }

    return 0;
}