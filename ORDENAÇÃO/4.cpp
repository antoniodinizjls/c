// #include<iostream>
// #include<new>

// struct car {
//     float altura;
// };

// int main(){
//     car *vetor;
//     vetor =  new car[2];
//     // p2.altura = 14;
    
//     // std::cout << p2.altura << std::endl;
//     vetor[0].altura = 1.60;
//     vetor[1].altura = 1.80;
//     std:: cout << "Altura do primeiro e do segundo" << std::endl;
//     std::cout << vetor[0].altura << std::endl;

//     std::cout  << vetor[1].altura << std::endl;


//     return 0;
// }


#include<iostream>
#include<string>
#include<stdlib.h>
#include<new>

struct pessoa{
    std::string name;
    float altura;
};

int main(){
    pessoa *ponteiro = new pessoa[2];
    // ponteiro = new pessoa[2];

    ponteiro[1].name = "Antonio";
    // ponteiro[1].name = "Antonio\n";
    std::cout << ponteiro[1].name << std::endl;
    // std::cout << ponteiro[1]->name << std::endl;

    return 0;
}
