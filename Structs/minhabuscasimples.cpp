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
int busca(int vetor[TAM],int valorprocurado){
    int aux;
    int indice;
    for(aux=0;aux<TAM;aux++){
        if(vetor[aux]==valorprocurado){
            indice=aux;
        }
    }
    if(indice!=-1 && indice<=TAM && (vetor[aux]==valorprocurado)){
        cout<<"O valor encontrado foi "<<vetor[indice]<<" e seu indice é "<<indice;

    }else{
        cout<<"O valor não foi encontrado na lista\n";
    }
    return 0;
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98};
    int valorprocurado;

    imprimevetor(vetor);


    cout<<"Digite o valor a ser encontrado \n";
    cin>>valorprocurado;

    busca(vetor, valorprocurado);


    return 0;
}
