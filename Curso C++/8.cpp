#include<iostream>
#include<string>
#include<ios>
#include<limits>

class pessoa{
    private:
    std::string name;
    public:
    std::string getname(){
        return name;
    }
    public:
    void insertname(std::string nome){
        name = nome;
    }
};
int main(){
    pessoa p1;
    p1.insertname("Antonio");
    std::cout << p1.getname() << std::endl;


    return 0;
}