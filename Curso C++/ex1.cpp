#include<iostream>
#include<limits>
#include<ios>
#include<string>

class coxinha{
    public:
    std::string sabor;
    float preço;
    coxinha(){
        sabor = "None";
    }
    coxinha(std::string s){
        sabor = s;
    }
};
int main(){
    std::string s;
    std::cout << "Digite um sabor" << std::endl;
    std::cin >> s;
    coxinha c1(s);
    std::cout << c1.sabor;
    return 0;
}