#include<stdlib.h>
#include<stdio.h>
#include<locale>
#include<string>
#include<new>
#include<iostream>
using namespace std;

struct aluno {
    string nome;
    float nota;

};


int main(){
    int i;
    float aux=0,res;
    setlocale(LC_ALL,"");
    aluno *alunos = new aluno[5];
    cout <<"Digite o nome de cada aluno e suas notas \n";

    for(i=0;i<5;i++){
       // cin >> alunos[i].nome >> alunos[i].nota;
        cin>> alunos[i].nota;
    }
    for(i=0;i<5;i++){
        aux += alunos[i].nota;
    }
    res = aux/5;
    cout <<"A média das notas é igual a: "<<res ;

    return 0;
}