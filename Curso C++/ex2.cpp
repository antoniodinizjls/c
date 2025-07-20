#include<iostream>
#include<ios>
#include<limits>
#include<string>

class dog{
    public:
    std::string race;
    dog(){
        race = "Viralatinha";
    }
    dog(std::string r){
        race = r;
    }
};

int main(){
    dog n1;
    std::cout << n1.race << std::endl;
    dog n2("Dalmata");
    std::cout << n2.race << std::endl;
    return 0;
}