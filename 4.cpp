#include<limits>
#include<iostream>
#include<string>
#include<list>
#include<string>
#include<stack>

int main(){
    // std::list<std::string> cars = {"Tesla","BMW"};
    // // std::cout << cars[0] << std::endl;

    // for(std::string car : cars){
    //     std::cout << car << std::endl;
    // }
    std::stack<std::string> pilha; 
    pilha.push("Volvo");
    std::cout  << pilha.top() << std::endl;
    pilha.top()  = "Tesla";
    std::cout << pilha.top() << std::endl;
    
    // std::cout << pilha[0];
    return 0;
}