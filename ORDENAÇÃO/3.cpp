#include<iostream>
#include<stdlib.h>
#define TAM 3
// Lista Simples
// lista armazenada em sequencia na memoria

// Lista encadeada
//Cada item tem o ponteiro que aponta para o próximo elemento na memória

void print(int *vetor, int length){
    for(int a = 0; a < TAM; a++){
        std::cout << vetor[a] << std::endl;
    }
}
void input(int *vetor, int length){
    for ( int u = 0; u < length; u++){
        std::cout << "Digite a posicao do vetor" << u << std::endl;
        std:: cin >> vetor[u];
    }
}
// void limpar(){
//     system("CLS");
// }

int main(){

    // std::cout << "hello world" << std::endl;
    int vetor[TAM] = {1,2,3};
    int cont  = 0, length = 0;

    print(vetor,length);
    // std:: cout << *vetor;
    std::cout << "Digite ";
    std::cout << std::endl;
    limpar();
    return 0;
}
