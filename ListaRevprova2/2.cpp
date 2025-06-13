#include<stdio.h>

int main(){
    int vetor[50], large[2];
    int  i  = 0, atual = 0, primeiro = 0,lacuna = 0,mlacuna;
    
    bool b = true;

    // for(i = 0; i<=49; i++){
    //     scanf("%d",&vetor[i]);
    // }
    printf("recebendo os numeros\n");
    
    for(i = 0; i<=49;i++){
        primeiro = i;
        
        if(vetor[i] < vetor[(i+1)]){
            atual = vetor[(i+1)];
        }else{
            lacuna = atual - vetor[i]; 
            if(lacuna < mlacuna){
                mlacuna = lacuna;
            }
        }
    }
    printf("Dada a lista o maior intervalo é");



    return 0;
}