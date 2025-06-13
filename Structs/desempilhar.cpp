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
// Acima coloquei elementos
//Abaixo estarei tirando os elementos
void pilhapop(int pilha[TAM],int *topo){
    if(*topo==-1){
        cout<<"Pilha vazia";
    }else{
        cout<<"Valor removido: "<<pilha[*topo]<<"\n";
        *topo= *topo-1;
    }
}



int main(){
    int valor;
    int pilha[TAM]={};
    int topo=-1;  // topo da pilha
    // se o topo é -1 a pilha está vazia


    // Caso não possa colocar mais valores
    valor=5;
    pushpilha(pilha,valor,&topo);
    pilhapop(pilha,&topo);
    imprime(pilha);
    valor=7;
    pushpilha(pilha,valor,&topo);
    pilhapop(pilha,&topo);
    imprime(pilha);


    


    return 0;
}