#include<iostream>
#include<ios>
#include<limits>
#include<string>
#include<cstdlib>
#include "celular.h"
// class smartphone{
//     private:
//     std::string brand;
//     float price;
//     public:
//     void insertbrand(std::string brandtarget){
//         brand = brandtarget;
//     }
//     void insertprice(float preco){
//         price = preco;
//     }
//     std::string showbrand(){
//         return brand;
//     }
//     float showprice(){
//         return price;
//     }
// };
int main(){
    std::string brandtarget;
    float preco;
    smartphone p1;
    std::cout << "Criando carro" << std::endl;
    std::cout << "Digite o nome de uma marca de smartphone" << std::endl;
    std::cin >> brandtarget;
    std::cout << "Digite o preco do celular" << std::endl;
    std::cin >> preco;
    p1.insertbrand(brandtarget);
    p1.insertprice(preco);
    system("CLS");
    std::cout<< "Mostrando o carro" << std::endl;
    std::cout << p1.showbrand() << std::endl;
    std::cout << p1.showprice() << std::endl;

    return 0;
}