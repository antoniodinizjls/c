#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<new>

using namespace std;
struct frutal
{
    string cor;
    string nome;
};

int main(){
    int i;
    setlocale(LC_ALL,"Portuguese");
    frutal *fruta= new frutal[10];
    fruta[0].cor ="Amarela";
    fruta[1].nome="Banana";  

    for(i=0;i<1;i++){
        cout<<fruta[0].cor<<"\n"<<fruta[1].nome;

    }


    return 0;
}