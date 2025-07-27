#include<iostream>
#include<string>
#include<limits>
#include<ios>

class salty{
    private:
    float price;
    std::string name;
    public:
    void insertname(std::string sabor){
        this->name = sabor;
    }
    void insertprice(float price){
        this->price =  price;
    }
    std::string showname(){
        return this->name;
    }
    float showprice(){
        return this->price;
    }
};


int main(){
    salty g1;
    std::string sabor;
    float price;
    std::cout << "Digite o preco e nome do salgado" << std::endl;
    std::cin >> price >> sabor;
    g1.insertname(sabor);
    g1.insertprice(price);
    std::cout << g1.showname() << std::endl;
    std::cout << g1.showprice() << std::endl;
    return 0;
}