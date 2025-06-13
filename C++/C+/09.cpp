#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
#include<conio.h>


using namespace std;

bool returnbool(){
    return true;
}

int main(){
    
    setlocale(LC_ALL,"Portuguese");
    
    bool vbool;
    cout <<"Digite alguma coisa\n";
    system("clear"); // maneira de limpar o terminal
    vbool = returnbool();
    // cout<<vbool;
    if (vbool){

        cout<<"É verdadeiro\n";

    }else{
        cout <<"n é verdadeiro \n";
        }
       
    cout<<"Funcionou";

    return 0;
}