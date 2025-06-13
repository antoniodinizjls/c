#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<new>

using namespace std;



struct marca{
    string  marca;
    int ano;
};

int main(){
    int i;
    setlocale(LC_ALL,"Portuguese");
    marca *ponteirocarro = new marca;
    cout<<"Digite o nome da marca do carro e seu ano \n";
    cin>> ponteirocarro[0].marca>>ponteirocarro[0].ano;
    for(i=0;i<1;i++){
        cout<<ponteirocarro[i].marca <<"\n"<< ponteirocarro[i].ano;
    
    }

    return 0;
}