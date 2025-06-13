#include<stdio.h>

int main(){
    // char str[2] = "a";
    // int soma = 0;
    // soma = -32 + int(str[0]);
    int i = 0;
    char frase[20];

    printf("Digite seu nome\n");
    setbuf(stdin, NULL);
    fgets(frase, sizeof(frase),stdin);
    
    for(i = 0; frase[i] != '\0'; i++){
        frase[i] = -32 + int(frase[i]);
    }
    printf("%c",frase);    


    return 0;
}