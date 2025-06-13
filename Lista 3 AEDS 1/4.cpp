// Utilizando FOR faça um programa que leia 10 inteiros positivos,
// ignorando não positivos, e imprima sua MÉDIA.

#include<stdio.h>

int main(){
    int soma=0,input=0,i=0;

    while(i<10){
        printf("Digite um número inteiro positivo\n");
        scanf("%d",&input);
        input< 0? printf("Valor negativo ignorado\n") : soma+=input,i++;

    }
    printf("A média é igual a %d",(soma/10));

    return 0;

}