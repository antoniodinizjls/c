#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>
#include<iostream>

using namespace std;

int* alocavetor(int tamanho){

    // crio um ponteiro auxiliar
    int *aux;
    // Alocação dinâmica de memória
    aux = (int*) malloc(tamanho * sizeof(int)); 
    return aux; // retorno o ponteiro que reo
    // crio um ponteiro que delimita com a
    // a função malloc o tamanho do meu ponteiro
}

int main(){
    setlocale(LC_ALL,"");
   // Em linguagens como C não possuímos alocação dinâmica de memória
   // Temos que alocar memória previavemente
   //Exemplo: Não conseguimos pedir ao usuário para determinar o tamanhode um vetor
   int *vetor,tamanho,i; //int ponteiro vetor
    cout<<"Digite o tamanho do vetor: \n";
    cin>>tamanho;
    // ponteiro recebe o endereço de memória que foi alocado para o vetor
    vetor = alocavetor(tamanho);
    
    for(i=0;i<tamanho;i++){
        vetor[i]= i+5;
        cout<< "O vetor: "<<i<<" É igual a: "<<vetor[i]<<"\n";
    }


   free(vetor);

   for(i=0;i<tamanho;i++){
    cout<< vetor[i];
   }
    return 0;
}