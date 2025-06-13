#include<iostream>
#include<new>
#include<string>
#include<stdlib.h>
#define TAM 10

using namespace std;

void mostravetor(int vetor[TAM], int cont){
    for(cont=0;cont<TAM;cont++){
        cout<<  vetor[cont]<<" - ";

    }
}

int buscasimples(int valorprocurado,TAM,int cont, bool valorencontrado, int posicaoencontrada,int posicao,int vetor){

    // Percorre a lista em busca do valor
    for(cont=0;cont<TAM;cont++){
        if(vetor[cont]==valorprocurado){
            valorencontrado= true;
            posicaoencontrada= cont;

        }
    }
    if(valorencontrado== true){
        cout<<"O valor foi encontrado : "<<posicaoencontrada;

    }else{
        cout<<"Valor não encontrado";

    }
    return 0;
}


int main(){
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorprocurado;
    int cont;
    int posicao,posicaoencontrada;
    bool valorencontrado;

    mostravetor(vetor,cont);

    cout<<"Qual número deseja encontrar?\n";
    cin>>valorprocurado;
    buscasimples(valorprocurado,TAM, cont,valorencontrado);

    return 0;
}