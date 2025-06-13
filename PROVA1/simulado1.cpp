#include<stdio.h>

int main(){
    int num=0,escolha=0,i=0,resto=0;
    printf("Digite um numero\n");
    scanf("%d",&num);

    printf("Digite 1- Para converter a binario ou 2 para decimal\n");
    scanf("%d",&escolha);

    switch(escolha){
        
        case 1:
        while(i>=0){
            if(i%2==0){
                resto=0;
                printf("0");
            }else{
                printf("1");
                resto=1;
            }
            i= (i/2)+resto;
            resto=0;
        }    
        
        case 2:
        

    }





    return 0;
}