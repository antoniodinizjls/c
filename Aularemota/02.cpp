#include<stdio.h>

int main(){
    int vetor[5] = {51, 3, 21, 32, 2};
    int maior = 0;
    int  i = 0;
    for(i=0; i <=4; i++){
        vetor[i] > maior ? maior = vetor[i] : NULL;  
    }

    printf("O maior numero e %d",maior);

    return 0;
}