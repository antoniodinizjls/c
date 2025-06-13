#include<iostream>
#include<string>
#include<new>
#define TAM 10

using namespace std;

int buscabinaria(int vetor[TAM],int valorprocurado){
    int esquerda,direita,meio;
    esquerda= 0;
    direita=TAM-1;

    meio = (esquerda+direita)/2;
    while(esquerda<=direita){
        if(valorprocurado==vetor[meio]){
            cout<<"A posição é: "<<meio;
            return 1;
        }
        if(vetor[meio]<valorprocurado){
            esquerda= meio+1;
        }else{
            direita= meio-1;
            cout<<"DEU ERRADO";
            return -1;
        }

    }
    return 0;
}



void imprimevetor(int vetor[TAM]){
    int i=0;
    cout<<"Lista de números: ";
    for(i=0;i<TAM;i++){
        cout << vetor[i]<<"-";
    }
    cout <<"\n";
}

int main(){
    int vetor[TAM]={10,20,30,40,50,60,70,80,90,100};
    int valorprocurado;
    imprimevetor(vetor);
    cout<<"Qual o valor procurado?\n";
    cin>> valorprocurado;
    buscabinaria(vetor,valorprocurado);
    return 0;

}