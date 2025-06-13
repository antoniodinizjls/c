#include<stdio.h>

int main(){
    
    int num=0;
    int soma=0;
    int i=0;

    printf("Digite um numero \n");
    scanf("%d",&num);

    for(i=1;i<num;i++){
        
        if(num%i==0){
            
            soma+=i;
        }

    }
    printf("A soma de todos os divisores e %d\n",soma);

    return 0;

}