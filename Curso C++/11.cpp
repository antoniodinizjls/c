#include<ios>
#include<iostream>
#include<string>
#include<limits>

// Protected : pode ser acesso pela classe pai e filho
// Public : pode ser acessado para todos
// Private: Só pode ser acessado pela própria classe


class car{
    protected:
    float price;
};

class brands: private car{
    protected:
    std::string brand;
};
class pric: private brands{
    private:
    float price;
    public:
    void insertprice(float price){
        this->price = price;
    }
    void insertbrand(std::string brand){
        this->brand = brand;
    }
    float showprice(){
        return this->price;
    }
    std::string showbrand(){
        return this->brand;
    }

};
int main(){
    pric p1;
    p1.insertbrand("Volvo");
    p1.insertprice(1990);
    std::cout << "Marca " << p1.showbrand() << std::endl;
    std::cout << "Preco " << p1.showprice() << std::endl;
    return 0;
}