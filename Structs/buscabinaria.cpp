
    //Em uma pesquisa binária a lista necessita estar ordenada
    // Uma lista ordenada é aquela que os valores são crescente
#include<stdlib.h>
#include<iostream>
#include<string>
#include<locale.h>
#define TAM  10

using namespace std;

void imprimevetor(int vetor[TAM]){
    int cont=0;
    for(cont=0;cont<TAM;cont++){
        cout<<vetor[cont]<<"-";
    }
    cout<<"\n";
}
int buscabinaria(int vetor[TAM],int valorprocurado){
    int meio; //limites (cursor)
    int esquerda = 0;
    int direita = TAM-1;
    
    meio = (esquerda+direita)/2;
    while(esquerda<=direita){
    //ajusto os limites
        if(valorprocurado == vetor[meio]){
            valorprocurado=meio;
            cout<<valorprocurado;
            return 1;

        }
        if(vetor[meio]< valorprocurado){
            esquerda= meio+1;
        }else{
            direita= meio-1;
        }
        return -1;}
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorprocurado;

    imprimevetor(vetor);


    cout<<"Digite o valor a ser encontrado \n";
    cin>>valorprocurado;

    buscabinaria(vetor, valorprocurado);


    return 0;
}
