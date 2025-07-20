#include<ios>
#include<iostream>
#include<limits>
#include<string>

class calculator{
    public:
    int soma(float x, float y){
        return x+y;
    }
    int subtracao(float x, float y){
        return x - y;
    }
    int multiplicao(float x, float y){
        return x * y;
    }
    int divisao(float x, float y){
        return x/y;
    }

};
int main(){
    calculator p1;
    std::cout << "Somando " << p1.soma(2,3) << std::endl;
    std::cout << "Subtracao " << p1.subtracao(2,3) << std::endl;
    std::cout << "Multiplicando " << p1.multiplicao(2,3) << std::endl;
    std::cout << "Divisão " << p1.divisao(2.00,3.00) << std::endl;

    return 0;
}