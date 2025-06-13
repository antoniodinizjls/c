#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<new>
#include<string>
#include<locale.h>
#include<new>

using namespace std;

// struct 
struct fruta{
    string cor;
    string nome;


};

int main(){
    int i;
    setlocale(LC_ALL,"Portuguese");
    // criando ponteiro para o struct
    // criei um ponteiro apontado para o endereço de memória do meu struct
    /// o new aloca a memória automaticamente para este ponteiro

    fruta *primeirafruta = new fruta;
    // modificando valores
    primeirafruta->cor ="Amarela";
    primeirafruta->nome ="Banana";

    cout<< "Cor da fruta "<<primeirafruta->cor<<"Nome da fruta: "<<primeirafruta->nome;

    // criando lista de frutas
    fruta *ponteirolistafrutas = new fruta[2];

    // modificando valores
    ponteirolistafrutas[0].cor ="Vermelho";
    ponteirolistafrutas[1].nome ="Maça";
    ponteirolistafrutas[0].cor ="Amarelo";
    ponteirolistafrutas[1].nome="Banana";


    for(i=0;i<2;i++){
        cout << ponteirolistafrutas[i].cor << "\n" <<ponteirolistafrutas[i].nome; 
        cout <<"\n";

    }
    return 0;
}
