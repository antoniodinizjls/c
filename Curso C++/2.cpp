#include<iostream>
#include<limits>
#include<ios>

int main(){
    char name[80];
    std::cin.sync(); // limpar o buffer
    std::cout << "Digite seu nome" << std::endl;
    std::cin.getline(name,80);
    std::cin.sync();
    std::cout << name;
    


    return 0;
}
