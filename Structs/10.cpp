#include<stdio.h>
#include<string.h>
#include<string>
#include<fstream>
#include<iostream>

using namespace std;

int main(){

    ifstream input("antonio.txt");
    string texto;

    for(string line;getline(input, line);){
        texto+=line;

    }
    cout<<texto;

    return 0;
}