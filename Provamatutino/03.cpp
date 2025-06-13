#include<stdio.h>

int main(){

    int a  = 0 , b = 0, i = 0, k = 0;
    int j = 0, soma = 0;
    while(true){
        printf("Digite valores para A e B, sendo B necessariamente maior \n");
        scanf("%d %d", &a,&b);
        if (a<b){
            for(i = a; i <= b; i++ ){
                if(i % 3 == 0 ^ i % 5 == 0){
                    for(k = 0; k <=3; k++){
                        j = b % 10;
                        b = b /  10;
                        soma = soma + j;
                        j = 0;
                    }
                if(soma % 2 == 0){
                    printf("I: %d\n",i);
                }
                }
            }
            break;
        }

    }
    return 0;
}