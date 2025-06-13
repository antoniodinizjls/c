#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int main(){

    int matriz[2][2];
    float diag1,diag2,det;
    cout<<"Digite os números da primeira coluna \n";
    cin>> matriz[0][0]>>matriz[0][1];
    cout<<"Digite os números da segunda coluna \n";
    cin>> matriz[1][0]>> matriz[1][1];
    diag1= matriz[0][0]*matriz[1][1];
    diag2= matriz [0][1]* matriz[1][0];
    det = diag1-diag2;
    cout<<"Valor da determinante: "<<det;


    return 0;
}
