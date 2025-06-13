#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<string>
#include"functions.h" // Importação de arquivo
using namespace std;



int main(){
    setlocale(LC_ALL,"");
    cout<<"Chamando função \n";
    imprimir();


    return 0;
}