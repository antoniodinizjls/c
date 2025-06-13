#include<stdio.h>

int main() {
    int num[5],i=0,j=0;
    
    printf("Digite o primeiro número \n");
    scanf("%i",&i);
    num[0]=i;
    if((num[0]%2)==0){
        j++;
    }
    printf("Digite o segundo número \n");
    scanf("%i",&i);
    num[1]=i;
    if((num[1]%2)==0){
        j++;
    }
    printf("Digite o terceiro número\n");
    scanf("%i",&i);
    num[2]=i;
    if((num[2]%2)==0){
        j++;
    }
    printf("Digite o quarto número \n");
    scanf("%i",&i);
    num[3]=i;
    if((num[3]%2)==0){
        j++;
    }
    printf("Digite o quinto número\n");
    scanf("%i",&i);
    num[4]=i;
    if((num[4]%2)==0){
        j++;
    }
    
  
   
    printf("Você digitou %i números pares e %i números ímpares\n",j,5-j);
    
    
    return 0;
}