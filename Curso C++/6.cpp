#include<iostream>
#include<limits>
#include<ios>
#include<string>

class person{
    public:
    std::string name;
    float height;
    int age;
    person(std::string n, float h,int a){
        name = n;
        height = h;
        age  = a;
    }
    void print(){
        std::cout << name << std::endl;
        std::cout << height << std::endl;
        std::cout << age << std::endl;
    }

};
int main(){
    person p1("Antonio",1.7,19);
    p1.print();
    return 0;
}