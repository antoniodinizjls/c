#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;

void clearscreen(){
    system("CLS");
    //CLS= clear screen(comando que limpa a tela)
}

int main(){
    setlocale(LC_ALL,"Portugues");

    cout <<"Jorge de Assis Dias";
    clearscreen();
    cout<<"Oi mundo \n";



    return 0;
}