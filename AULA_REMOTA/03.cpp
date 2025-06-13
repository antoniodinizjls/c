#include<stdio.h>

int main(){
    int vetor[3][3][3];
    int i = 0;
    int j = 0;
    int k = 0;
    int total = 0;
    for(i=0; i<=2; i++){
        for(j=0; j<=2; j++){
            for(k=0;k<=2; k++){
                vetor[i][j][k] =  1;
            }
        }
    }
    for(i=0; i<=2; i++){
        for(j=0; j<=2; j++){
            for(k=0;k<=2; k++){
                total += vetor[i][j][k];
            }
        }
    }
    

    printf("Soma dos elementos %d\n",total);


    return 0;
}