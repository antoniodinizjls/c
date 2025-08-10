#include<string.h>
#include<ios>
#include<iostream>
#include<string>

int main(){
    // std::string c = "Antonio";
    // c += "0";
    // for(auto caracter  : c){
    //     std::cout << caracter << std::endl;
    // }
    long long int  n;
    int resto;
    std::string c;
    std::cout << "Digite um numero" << std::endl;
    std::cin  >> n;
    while(n > 0){
        resto = n % 2;
        c+= std::to_string(resto);
        // std::cout << resto << std::endl;
        n/=2;    
    }
    std::cout << "flag" << std::endl;
    std::cout << c;
    return 0;
}