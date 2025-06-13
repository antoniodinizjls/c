#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int a;
    cout << "Digite um valor \n";
    cin >> a;
    
    cout << " O sucessor de " << a <<  " é " <<  a+1;
    return 0;
}