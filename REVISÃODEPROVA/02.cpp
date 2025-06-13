#include<stdio.h>

int main(){
    
    int num=0;
    
    int i=0;
    
    int cont=0;
    
    printf("Digite um numero para ser verificado se realmente e primo \n");
    scanf("%d",&num);

    for(i=1;i<num;i++){
        if(num % i ==0){
            cont++;
        }
    }


    cont > 1? printf("Nao é primo") : printf("O numero %d e primo \n",num);




    return 0;
}