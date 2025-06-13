#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void multiplication(int a,int b){
    cout<<"A multiplicação dos argumentos fornecidos é igual a: "<<(a*b);
}
void sum(int a,int b){
    cout << "A soma entre os argumentos é igual a: "<<(a+b);

}


int main(){
    int a,b;
    setlocale(LC_ALL,"");
    cout << "Digite dois números \n";
    cin >> a >> b;
    multiplication(a,b);
    cout<<"\n";
    sum(a,b);



    return 0;
}