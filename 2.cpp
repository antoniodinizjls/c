// #include<stdio.h>
#include<limits>
#include<iostream>
#include<string>
#include<ctime> 
#include<vector>
#include<list>
#include<set>
#include<map>
#include<stack>
#include<queue>

// using namespace std;

int main(){
    std::vector<std::string> cars = {"Volvo","BMW"};
    std::cout << cars[0] << std::endl;

    // std::cout << cars.front() << std::endl;
    // std::cout << cars.back() << std::endl;
    // std::cout << cars.at(2) << std::endl;
    // acessando  um elemento específico
    // change a element
    cars[0] = "palio";
    std::cout << cars.at(0);

    return 0;
}
