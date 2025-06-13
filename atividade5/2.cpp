#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Exercicio palindromo

int main(){
    char palavra[255],inv[255];
    int  i = 0;
    printf("Digite a palavra\n");
    setbuf(stdin,NULL);
    fgets(palavra,sizeof(palavra),stdin);
    // printf("palavra %s",palavra);
    int tamanho =  strlen(palavra) - 2;
    for(i = 0; i <=tamanho; i++){
        // palavra[(tamanho - i)] = inv[i];
        inv[i] = palavra[(tamanho-i)];
    }
    // for(i = 0; i<=tamanho; i++){
    //     printf("%c",inv[i]);
    // }
    // printf("primeiro elemento do inverso %c\n",inv[0]);
    
    for(i = 0; i<=tamanho;i++){
        if(palavra[i]!=inv[i]){
            printf("%c,%c\n",palavra[i],inv[i]);
            printf("n e palindromo \n");
            return 0;
        }
    }
    printf("e palindromo\n");




    return 0;
}