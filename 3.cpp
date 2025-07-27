#include<limits>
#include<iostream>
#include<ios>
#include<string>
#include<vector>

int main(){
    std::vector<std::string> cars = {"Vetor", "Palio"};
    // cars.push_back("Tesla");

    // // adicionando elementos no final
    // std::cout << cars.at(0) << std::endl;
    // std::cout << cars.at(1) << std::endl;
    // std::cout << cars.at(2) << std::endl;
    // std::cout << "Tamanho do array " << cars.size() << std::endl;
    std::cout << cars[0];
    return 0;
}