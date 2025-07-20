#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<iostream>

int main(){
    char letras[5][5], tabela[5][5], res[5][5];
    int i = 0,  j = 0, total = 0, aux = 0;

    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            scanf("%c",&letras[i][j]);
        }
    }

    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            tabela[i][j] =  int(letras[i][j]);
        }
    }
    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            // tabela[i][j] =  int(letras[i][j]);
            total += tabela[i][j];
        }
    }


    int media =  total /25;
    printf("Media dos valores %d",media);

    //ordenando
    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            for(int k = 0 ; k < 5; k++){
                for(int u = 0; u < 5; u++){
                    if(tabela[i][j] > tabela[k][u]){
                        aux = tabela[k][u];
                        tabela[k][u] = tabela[i][j];
                        tabela[i][j] = aux;
                    
                    }
                }
            }    
        }
    }
    // valores ordenados
    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("Valor : %d\n",tabela[i][j]);
        }
    }
    // colocando valores em diagonal
    for(i = 4; i  < 0; i--){
        for(j = 4; j < 0; j--){
            if(tabela[i][j] >= media){
                if(i==j){
                    res[(-1*(i-4))][(-1*(j-4))] = tabela[i][j];
                    tabela[i][j] = -1; 
                }
            }
        }
    }   
    for(i = 4; i  < 0; i--){
        for(j = 4; j < 0; j--){
            if(tabela[i][j] >= media){
                if((i+j)==4){
                    res[(-1*(i-4))][(-1*(j-4))] = tabela[i][j];
                    tabela[i][j] = -1; 
                }
            }
        }
    } 
    for(i = 4; i  < 0; i--){
        for(j = 4; j < 0; j--){
            if(tabela[i][j] >= media){
                if(((i+j)!=4)  && (i!=j)){
                    res[(-1*(i-4))][(-1*(j-4))]  = tabela[i][j];
                    tabela[i][j] = -1; 
                }
            }
        }
    } 
    // matriz reconvertida
    for(i = 0;i < 5; i++){
        for(j = 0; j < 5; j++){
            res[i][j] = char(res[i][j]);
        }
    }
    


    return 0;
}