#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main(){{
    int a;
    using namespace std;
    setlocale(LC_ALL,"");
    std::cout << "oi, digite um número \n"; // imprimindo variaveis com C++
    cin >> a;

    cout<<"O número digitado foi "<<a;



    return 0;
}}