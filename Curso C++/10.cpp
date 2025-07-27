#include<iostream>
#include<ios>
#include<limits>
#include<string>
#include<cstdlib>
class vehicle{
    public:
    float price;
};

class car: public vehicle{
    private:
    std::string brand;
    public:
    void insertbrand(std::string brand){
        this->brand =  brand;
    }
    void insertprice(float price){
        this->price = price;
    }
    std::string returnbrand(){
        return this->brand;
    }
    float returnprice(){
        return this->price;
    }

    // conceito de herança
    // utilizo elementos de outras classes na classe car
};
int main(){
    car p1;
    std::string brand;
    float price;
    std::cout << "Digite o nome do carro e seu preco" << std::endl;
    std::cin >> price >> brand;   
    p1.insertbrand(brand);
    p1.insertprice(price);
    system("CLS");
    std::cout<< p1.returnbrand() << std::endl;
    std::cout << p1.returnprice() << std::endl;
    return 0;
}