#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string>
#include<iostream>

using namespace std;

int main(){
    
    int a=10,b=20;
    int *ponteiro;
    
    setlocale(LC_ALL,"");
    
    // cout << a<<"\n"; //imprimindo variável
    
    // cout << &a; // imprimindo endereço de memória  de uma variável
    
    //Ponteiros armazenam posições da memória
    ponteiro = &b;
    *ponteiro=40; //conteúdo apontado pela memória passa a ter esse valor
    cout << *ponteiro;
    return 0;

}