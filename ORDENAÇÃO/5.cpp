#include<iostream>
#include<new>
#include<stdlib.h>
#include<string>

struct pessoa{
    float altura;
    int idade;
    std::string name;
};

void print(pessoa *lista, int length){
    for(int k = 0; k < length; k++){
        std::cout << lista[k].altura << std::endl;
        std::cout << lista[k].idade << std:: endl;
        std::cout << lista[k].name << std:: endl;
    }
}
void novo(pessoa *lista, int length, int height, int age, std::string nome){
    // if(length != 0){
    //     pessoa *lista = new pessoa[(length+1)];
    //     for(int  j = 0; j < 1; j++){
    //         lista[(length-1)].altura = height;
    //         lista[(length-1)].idade = age;
    //         lista[(length-1)].name = nome;
    //     }
    // }    
    pessoa *lista = new pessoa[(length+1)];
    for(int  j = 0; j < 1; j++){
        lista[(length-1)].altura = height;
        lista[(length-1)].idade = age;
        lista[(length-1)].name = nome;
    }     
}


int main(){
    int input = 3, length = 1 ;
    float height, age;
    std::string nome ;
    pessoa *lista = new pessoa[length];  
    
    while(input != 0){
        
        std:: cout << "Digite um  1 para cadastrar um novo usuário " << std::endl;
        std:: cout << "Digite 2 para cadastrar uma pessoa no final " << std::endl;
        std:: cin >> input;
        switch(input){

            case 1:
                ++length;
                std:: cout << "Digite a  altura de uma pessoa" << std::endl;
                std:: cin >> height;
                std:: cout << "Digite a idade de uma pessoa" << std::endl;
                std:: cin >> age;
                std:: cout << "Digite o nome da pessoa" << std::endl;
                std:: cin >> nome;
                novo(&lista,length,height,age,nome);
                print(&lista,length);
        }
    }
    return 0;
}