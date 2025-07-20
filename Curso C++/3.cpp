#include<limits>
#include<ios>
#include<iostream>
#include<string>

class cookie{
    public:
    float preco;
    std::string sabor;
    std::string formato;
    cookie(){ // metodo construtor na classe
        formato = "Redondo";
        std::cout << "O formato é " << formato;
    }
};

int main(){
    cookie p1;
    std::cin.sync(); // limpeza de buffer
    std::cout << "Digite o preco do cookie "<< std::endl;
    std::cin >> p1.preco; 
    std::cin.sync(); //limpeza de buffer
    std::cout << "Digite o sabor " << std::endl;
    getline(std::cin,p1.sabor);

    std::cout << "Preco " << p1.preco << std::endl;
    std::cout << "Sabor " << p1.sabor << std::endl;
    return 0;
}