#include<stdio.h>


int main(){
    int i,j=1,soma;
    
    printf("Digite um termo genérico \n");
    scanf("%i",&i);
    
    while(true){
        j++;
        if(i%j==0){
            //printf("%i",j);
            soma+=j;
        }else if(j==i-61){
            break; 
        }
    }
    printf("A soma dos divisores é igual a: %i",soma);


    return 0;
}