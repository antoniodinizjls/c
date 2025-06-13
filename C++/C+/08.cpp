#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>

using namespace std;

bool returnbool(){
    return true;
}

int main(){
    
    setlocale(LC_ALL,"Portuguese");
    
    bool vbool;
    
    vbool = returnbool();
    // cout<<vbool;
    if (vbool){

        cout<<"É verdadeiro\n";

    }else{
        cout <<"n é verdadeiro \n";
        }


    return 0;
}