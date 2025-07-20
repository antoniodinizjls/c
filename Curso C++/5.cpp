#include<iostream>
#include<ios>
#include<limits>

class calculadora{
    public:
    int soma(int x, int y){
        int res  = x + y;
        return res;
    }
};

int main(){
    calculadora p1;
    std::cout << "Realizando soma entre 2 e 3 atráves de classes" << std::endl;
    std::cout << "Resultado " << p1.soma(2,3) << std::endl;
    return 0;
}