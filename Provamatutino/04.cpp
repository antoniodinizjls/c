#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    
    int i = 0, j = 0, media = 0,totalmensal = 0, maior = 0, menor = 0;
    int semana = 0, dia = 0;
    int vendas[4][7]= {};
    int totalsemanal[4]= {};
 
    for(i = 0; i<= 3 ; i++){
        for(j = 0; j<=6;j++){
            cout << "Digite o valor de venda da semana " << (i+1) << " dia " << j+1 << "\n";
            cin >> vendas[i][j];
        }
    }
    //total de cada semana
    for(i = 0; i<= 3 ; i++){
        for(j = 0; j<=6;j++){
            totalsemanal[i]+= vendas[i][j];
        }
    }

    for(i = 0; i<=3; i++){
        cout << "O total da semana " << (i+1) << " é " << totalsemanal[i] << "\n";
    }

    for(i = 0; i<=3; i++){
        media += totalsemanal[i];
    }
    totalmensal = media;
    media = media / 4;

    cout << "Media das vendas semanal " << media << "\n";
    
    for(i = 0; i<= 3 ; i++){
        for(j = 0; j<=6;j++){
            if(maior < vendas[i][j]){
                maior = vendas[i][j];
                dia = j;
                semana = i;
            }
        }
    }
    
    cout << "A maior venda aconteceu na semana " << i << " no dia " << j << " a producao foi de " << maior  << "\n";
    
    for(i = 0; i<= 3 ; i++){
        for(j = 0; j<=6;j++){
            if(menor > vendas[i][j]){
                menor = vendas[i][j];
                dia = j;
                semana = i;
            }
        }
    }
    
    cout << "A menor venda aconteceu na semana " << i << " no dia " << j << " a producao foi de " << menor << "\n";

    cout << "O total mensal foi " << totalmensal ;


    return 0;
}