#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

typedef struct Data{
    int dia;
    int mes;
    int ano;
}Data;
 
struct Aluno{
    int id;
    Data nascimento;
};


int main(){
    setlocale(LC_ALL,"Portuguese");
    //criando um aluno
    struct Aluno aluno1;
    // modificando valores
    aluno1.id =1;
    aluno1.nascimento.dia =15;
    aluno1.nascimento.mes =2;
    aluno1.nascimento.ano =2006;
    cout <<"Nascido em "<<aluno1.nascimento.dia<< aluno1.nascimento.mes<<aluno1.nascimento.ano;


    return 0;
}