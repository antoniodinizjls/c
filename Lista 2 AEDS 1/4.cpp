#include<stdio.h>

int main(){
    int s,j=0,i;
    for(i=0;i<5;i++){
        printf("Digite um número\n");
        scanf("%i",&s);
        if(s%2==0){
            j++;
        }else{
        }
    }
    printf("Você digitou %i pares e %i ímpares\n",j,5-j);

    return 0;
}