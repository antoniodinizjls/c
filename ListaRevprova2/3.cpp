#include <cstddef>
#include<stdio.h>
#include<stdlib.h>


int main(){
    // int vetor[30]  = {6,7,9,14,15,18,21,24,27,28,30,33,35,36,1,2,4,5,8,10,11,13,16,17,19,22,23,25,26};
    // int *multiplo = (int*) malloc(1 * sizeof(int));
    int vetor[30];
    int  i = 0,tamanho = 0;
    int *multiplo = NULL;
    free(multiplo);
    for(i = 0; i <=29; i++){
        scanf("%d",&vetor[i]);
    }

    for(i = 0; i<=29; i++){
        if((vetor[i] % 7 == 0) || (vetor[i] % 3 == 0)){
            multiplo = (int *) realloc(multiplo,(tamanho+1) * sizeof(int));
            multiplo[i] = vetor[i];
            tamanho++;
        }
    }
    for(i = 0; i <= (tamanho-2); i++){
        printf("%d\n",multiplo[i]);
    }
    return 0;
}
