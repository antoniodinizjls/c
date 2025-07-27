#include<ios>
#include<iostream>
#include<string>
#include<limits>

class calculator{
    public:

    float suma(int a, int b){
        return a + b;
    }
    float sum(int a, int b, int c){
        return a + b + c;
    }
};
int main(){
    calculator p1;
    std::cout << p1.suma(1,2) << std::endl;
    std::cout << p1.sum(1,2,3);
    return 0;
}