#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    
    int i = 0, j = 0,totaldevendas = 0;
    int dia = 0, semana = 0, maior, diam, semanam = 0, menor;
    int vendas[4][7]= {};
    int totalsemanal[4]= {};
    int input, totald = 0 ;
    float media;
    for(i = 0; i<= 3 ; i++){
        for(j = 0; j<=6;j++){
            input = 1;
            while(input != 0){
            cout << "Digite o valor de venda da semana " << (i+1) << " dia " << j+1 << endl;
            cin >> input;
            //cin >> vendas[i][j];
            totald+= input;
            } 
            vendas[i][j] = totald;
            totald = 0;
        }
        cout << "Total da semana " << (i+1) << endl; 
    }
    input = 0;
    //total de cada semana
    for(i = 0; i < 4; i++){
        for(j = 0;j < 7; j++){
            input += vendas[i][j];
        }
        totalsemanal[i] = input;
        input = 0;
    }
    // total de vendas 
    for(i = 0; i < 4; i++){
        totaldevendas += totalsemanal[i];
    }
    cout << "Total de vendas " << totaldevendas << endl;
    media = (float)totaldevendas / 4;
    cout << "A media de vendas semanal foi igual a " << media << endl;
   
    // maior elemento e menor elemento   
    menor = vendas[0][0];
    maior =  vendas[0][0];
    for(i = 0; i < 4; i++){
        for(j = 0; j < 7; j++){
                if(maior < vendas[i][j]){
                dia = j;
                semana = i;
                maior = vendas[i][j];
            }
            if(menor > vendas[i][j] &&  vendas[i][j] != 0){
                diam = j;
                semanam = i;
                menor = vendas[i][j];
            }
        }
    }
    cout << "O maior elemento foi " << maior << " semana " << (semana+1) << " no dia " << (dia+1) << endl;
    cout << "O menor elemento foi " << menor << " semana " << (semanam+1) << " no dia " << (diam+1) << endl;
    // cout << "Total mensal " << (media * 4) << endl;
    return 0;
}