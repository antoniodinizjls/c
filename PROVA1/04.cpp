#include<stdio.h>

int main(){
    int a , b, u = 0;

    while(u < 1){
        printf("Digite um valor para A e B \n");
        scanf("%d %d", &a, &b);
        if( a < b){
            u++;
        }
    }
    return 0;
}