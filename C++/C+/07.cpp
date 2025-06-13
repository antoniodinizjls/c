#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>
#include<iostream>

using namespace std;

char caracter(){
    return 'c';
}

int main(){
    char a;
    setlocale(LC_ALL,"");
    a = caracter();// atribuo a função a uma variável
    cout<<a; // chamo a função através da letra
    return 0;
}

