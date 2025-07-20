class smartphone{
    private:
    std::string brand;
    float price;
    public:
    void insertbrand(std::string brandtarget){
        brand = brandtarget;
    }
    void insertprice(float preco){
        price = preco;
    }
    std::string showbrand(){
        return brand;
    }
    float showprice(){
        return price;
    }
};