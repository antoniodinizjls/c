#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<string>
#include<string.h>
#include<iostream>

using namespace std;

struct dados{
    int idade;
    string nome;
};

int main(){
    
    setlocale(LC_ALL,"");
    cout<<"Digite o nome de um pessoa por favor \n";
    
    getline(cin, dados.nome);

    return 0;
}