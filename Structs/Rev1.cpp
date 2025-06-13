#include<iostream>
#include<locale.h>
#include<string.h>
#include<fstream>
#include<stdio.h>

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese");
    //  Cria objeto de arquivo
    ofstream outfile;
    // abre o arquivo ou cria caso n exista
    outfile.open("tex.txt", std::ios_base::app);

    // Escreve algo
    outfile << "Antonio Diniz Jorge lima saraiva";

    outfile.close();


    return 0;
}