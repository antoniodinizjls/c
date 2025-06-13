#include<stdio.h>

int main(){
    int i,k,j,l,aux = 0;
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int ordenada[5][5];

    for(i = 0; i<=4 ; i++){
        for(k = 0; k<=4; k++){
            for(j=0; j<=4; j++){
                for(l = 0; l<=4; l++){
                    if(matriz[i][k] < matriz[j][l]){
                        aux = matriz[i][k];
                        matriz[i][k] = matriz[j][l];
                        matriz[j][l] =  aux;
                    }
                }
            }
        }
    }
    // duas ultimas linhas
    for(i = 0; i <=1 ; i++){
        for(j = 0; j<5; j++){
            ordenada[3+i][j] = matriz[i][j];
        }
    }
    // segunda e terceira linha
    for(i = 3; i <= 3; i++){
        for(j = 0; j < 5; j++){
            ordenada[5-i][j] =  matriz[i][j];
            ordenada[4-i][j] = matriz [i+1][j];
        }
    }
    //primeira linha
    for(i = 2; i < 3; i++){
        for(j = 0; j < 5; j++){
            ordenada[2-i][j] = matriz[2][j];
        }
    }

    for(i = 0; i<=4; i++){
        for(j = 0; j <= 4; j++){
            printf("%d ",ordenada[i][j]);
        }
        printf("\n");
    }
    return 0;
}
