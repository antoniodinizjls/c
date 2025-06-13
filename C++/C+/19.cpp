#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<iostream>
#include<string>
#include<new> //aloca memória automaticamente

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int cont,tamanho; 
    // Criando um ponteiro que recebe o novo vetor vazio
    int *vetor = new int[tamanho];
    cout<<"Digite o tamanho do vetor\n";
    cin>> tamanho;
    for (cont=0;cont<tamanho;cont++){
        vetor[cont]=cont;
        cout<<vetor[cont];

    }

 
 
 
    return 0;
}
