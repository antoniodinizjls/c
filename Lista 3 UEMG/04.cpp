#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale>
#include<new>
#include<string>
using namespace std;
struct produto{
    string nome;
    float preco;
};


int main(){
    int i,j;
    float aux=0;
    setlocale(LC_ALL,"");
    produto *listaproduto = new produto[3];
    cout<<"Digite o nome e o preço do produto \n";
    for(i=0;i<3;i++){
        cin >> listaproduto[i].nome>>listaproduto[i].preco;
    }
    aux = listaproduto[0].preco;
    for(i=0;i<3;i++){
        if((listaproduto[i].preco)>aux){
            aux =listaproduto[i].preco;
            j=i;
        }
    
    }
    // cout<<aux;
    // for(i=0;i<3;i++){
    //     if(aux==(listaproduto[i].preco)){
    //         j=i;
    //     }
    // }
    cout<<"O produto mais caro é : " <<listaproduto[j].nome <<" R$:"<<listaproduto[j].preco;


    return 0;
}