#include<iostream>
#include<ios>
#include<limits>


class Pessoa{
    public:
    int idade;
    std::string nome;
};

int main(){
    Pessoa p1;
    p1.idade  = 15;
    p1.nome = "Antonio Jorge";

    std::cout << "Idade: " << p1.idade << std::endl << "Nome: " << p1.nome  << std::endl; 

    return 0;
}