#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#define TAM 5


// PILHA
//O último a entrar é o primeiro a sair
using namespace std;
//PUSH desempilhar
//pop colocar na pilha
void imprime(int pilha[TAM]){
    int i;
    for(i=0;i<TAM;i++){
        cout<<pilha[i]<<"-";
    }
    cout<<"\n";

}
void pushpilha(int pilha[TAM],int valor,int *topo){
    /// uso ponteiro pois preciso alterar o valor da variável em todo o código

    if(*topo == TAM-1){
        cout<<"Pilha cheia \n";
    }else{
        *topo= *topo+1;
        pilha[*topo]= valor;

    }
}



int main(){
    int valor;
    int pilha[TAM]={};
    int topo=-1;  // topo da pilha
    // se o topo é -1 a pilha está vazia
    imprime(pilha);

    // Caso não possa colocar mais valores
    valor=5;
    pushpilha(pilha,valor,&topo);
    valor=7;
    pushpilha(pilha,valor,&topo);
    imprime(pilha);
    


    return 0;
}