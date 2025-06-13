#include<iostream>
#include<stdlib.h>
#include<string>
#include<stdio.h>
#include<locale.h>


using namespace std;

void operation(int a,int b,char sim){
    int i=0;
    while(i==0){
        if  (sim=='+'){
                cout <<"Resultado: "<<a+b;
                i++;
            }
            if (sim=='-'){
                cout <<"Resultado: "<<a-b;
                i++;
            }
            if(sim=='/'){
                cout<<"Resultado: "<<a/b;
                i++;
            if(sim=='*'){
                cout<<"Resultado: "<<a*b;
                i++;
            }
            }if(i==0){
                cout<<"\n";
                cout<<"Digite um símbolo";
                i++;}
}}
int main(){
    int a,b;
    char sim;
    setlocale(LC_ALL,"Portuguese");
    cout << "Digite dois números e um símbolo válido + - / *\n";
    cin >> a >> b   >>sim;
    operation(a,b,sim);
    return 0;
}