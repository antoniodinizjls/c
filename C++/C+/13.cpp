#include<iostream>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<locale.h>


using namespace std;

void multi( int *a){ // passo o argumento demarcando que é um ponteiro
    *a=*a*2; // multiplico o argumento por dois
}

int main(){
    setlocale(LC_ALL,"");
    int a,b; //declaração de variáveis

    cout<<"Digite algum número \n"; // faço a pergunta
    cin >> a,b; // cria viabilidade para input
    multi(&a); // apontei o endereço de memória

    cout<<"O resultado da variável A é igual a: "<<a;


    return 0;
}
