#include<stdio.h>

int main(){
    int limite=0,total=0,i;
    printf("Digite algum número para ser o limite da soma de impares \n");
    scanf("%d",&limite);
    for(i=1;i<=limite;i+=2){
        total+=i;
    }

    printf("A soma dos valores impares e igual a : %d",total);
    return 0;
}