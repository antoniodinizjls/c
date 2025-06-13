#include<stdio.h>

int main(){
    int i;
    int numeroadivinhado=0;
    i=i/100000;
    printf(" Numero %i",i);
    while(true){
        printf("Digite um número aleatório para ser adivinhado \n");
        scanf("%i",&numeroadivinhado);
        if(i==numeroadivinhado){
            printf("Você acertou o número \n");
            break;
        }else{
            printf("\n");
        }
    }

    return 0;
}