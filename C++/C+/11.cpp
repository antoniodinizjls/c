#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string>
#include<iostream>



using namespace std;

void sucessor(int num){
    cout << "O sucessor do número digitado é igual a :"<<(num+1);
}
void antecessor(int num){
    cout << "O número antecessor do digitado é : "<<(num-1);
}

int main(){
    int a;
    setlocale(LC_ALL,"");
    cout <<"Digite algum número \n";
    cin >> a;   
    sucessor(a);
    cout<<"\n";
    antecessor(a);
    return 0;
}