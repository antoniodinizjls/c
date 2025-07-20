#include<iostream>
#include<limits>
#include<ios>
#include<string>

class pessoa{
    public:
    float height;
    std::string name;
    pessoa(){
        std::cout << "Testando nome" << std::endl;
        name = "Desconhecido";
    }
    pessoa(std::string Nomenovo){
        std::cout << "Mudando nome" << std::endl;
        name = Nomenovo;
    }
};

int main(){
    // std::string res;

    pessoa p1("Antonio");
    p1.height = 1.70;
    std::cout << "Altura " << p1.height << std::endl;
    std::cout << "Nome " << p1.name << std::endl;   
    return 0;
}