#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<iostream>
#include<new>
#include<iostream>
#include<string.h>



using namespace std;


struct palavra{
    int ordem;
    char texto[255];
    char letra;

};

int main(){
    setlocale(LC_ALL,"");
    //Criar uma palavra
    struct palavra primeirapalavra;
    // Modificando os campos
    primeirapalavra.letra = 'c';
    primeirapalavra.ordem =10;
    // mostrando valor do struct
    strcpy(primeirapalavra.texto,"palavrinha");

    cout << "Ordem " << primeirapalavra.letra<<"\n";

    cout <<"A palavra digitada foi" << primeirapalavra.texto<<"\n";
    
    // fazendo lista de vetores
    struct palavra listadepalavras[3];
    
    listadepalavras[0].ordem=0;
    listadepalavras[1].ordem=1;
    listadepalavras[2].ordem=2;

    int contador;
    for (contador=0;contador<3;contador++){
        cout << listadepalavras[contador].ordem;
    }
    return 0;
}