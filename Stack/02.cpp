#include<iostream>
#include<stdlib.h>
#include<string>
#define TAM 10

// O ULTIMO A ENTRAR É O PRIMEIRO A SAIR
using namespace std;

void print(int pilha[TAM]){
    int init = 0;

    for(init = 0; init < TAM; init++){
        cout << pilha[init];

    }
}

void push(int value, int pilha[TAM],int *topo){
    
    // Caso não possa colocar mais valores
    if(*topo == TAM -1){
        cout << "Pilha cheia \n";
    }else{
        *topo = *topo + 1;
        pilha[*topo] = value;
    }

}
void pop(int pilha[TAM], int *topo){
    pilha[*topo] = 0;
    *topo = *topo - 1;
}

int main(){
    int value = 5;
    int pilha[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int topo = -1; // Topo de uma pilha
    
    print(pilha);
    push(value,pilha,&topo);    
    // value = 6;
    // push(value,pilha,&topo);
    //print(pilha);
    pop(pilha,&topo);
    printf("\n");
    print(pilha);


    return 0;
}