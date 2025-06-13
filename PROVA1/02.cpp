#include<stdio.h>


int main(){
    int i=0,soma=0;
    
    for(i=0;i<2000;i++){
        if((i%3==0)||(i%5==0)){
            soma+=i;
        }
    }
    printf("O resultado é igual a %i",soma);


    return 0;
}