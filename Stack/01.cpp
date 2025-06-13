
#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

using namespace std;

void imprime(int pilha[TAM]){
    int j = 0;

    for(j=0;j<(TAM-1);j++){
        cout << pilha[j] << "-";
    }
}

int main(){
    
    int pilha[TAM];
    int topo = -1;  //topo da linha

    imprime(pilha);

    //Caso não possa colocar mais valores

    if(topo == TAM - 1){
        cout << "Pilha cheia \n";
    }else{
        topo = topo + 1;
        pilha[topo] = 5;
    }
    
    imprime(pilha);



    return 0;
}