#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    
    
    char name[255];
    
    setlocale(LC_ALL,"");
    fflush(stdin); // limpar buffer do teclado para ler uma string
    printf("Digite seu nome completo \n");
    fgets(name,sizeof(name),stdin);// fgets é usado para ler strings que contém espaço
    printf("O nome digitado foi ");
    puts(name); // função puts imprime strings com espaço no meio ex:Nomes
    return 0;
    
} 