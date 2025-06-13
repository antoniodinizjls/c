#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<fstream>

using namespace std;

int main(){
    
    string input,linha;
    ofstream arquivo;
    ofstream("Texto.txt");
    cout<<"Digite algo que será salvo em um arquivo \n";
    getline(cin,input);
    arquivo<<input;
    arquivo.close();
    cout<<"O texto foi escrito no arquivo txt";

  
    return 0;
}