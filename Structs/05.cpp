#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale>
#include<string.h>
#include<fstream>


using namespace std;

int main(){
    setlocale(LC_ALL,"");
    // cria o objeto de arquivo
    ofstream  arquivodesaida;

    // abre o arquivo
    arquivodesaida.open("Texto.txt",std::ios_base::app);
    // escreva algo
    arquivodesaida <<"Mom"; // vai para dentro do arquivo
    arquivodesaida.close();    

    return 0;
}