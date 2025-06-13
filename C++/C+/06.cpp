#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<locale.h>

using namespace std;



int retornadez(){
    return 10;
}


int main(){
    setlocale(LC_ALL,"");
    int a;

    a= retornadez();
    cout << a;



    return 0;
}