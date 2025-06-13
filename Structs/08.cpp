#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<cstring>
#include<locale.h>
using namespace std;

union Dados{
    int idade;
    float altura;
};



int main(){
    setlocale(LC_ALL,"Portuguese");
    union Dados dado;
    dado.idade =10;
    cout<<dado.idade<<"\n";

    cout <<sizeof(dado.idade);
    return 0;
}

