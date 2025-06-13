#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>

using namespace std;

int main(){
    
    setlocale(LC_ALL,"");
    
    int a=10,*ponteiro;

    
    ponteiro = &a; // recebendo endereço da memória
    
    *ponteiro=15; // alterando o valor com base no local da memória
    
    
    cout << *ponteiro; // imprimindo o valor do ponteiro


    return 0;

}