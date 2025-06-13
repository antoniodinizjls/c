#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

void multi(int *vetora,int tamanho){
    int i;
    for(i=0;i<tamanho;i++){
        vetora[i]=vetora[i]*2;
    }
 
}


int main(){
    int vetor[4]={1,2,3,4},tamanho=4,j;
    setlocale(LC_ALL,"");
    multi(vetor,4);
    for(j=0;j<4;j++){
        cout << vetor[j]<<"\n";
    }
    return 0;
}