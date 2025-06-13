#include<stdio.h>

int main(){
    char frase[255];
    printf("Digite uma string\n");

    setbuf(stdin,NULL);
    fgets(frase,sizeof(frase),stdin);
    printf("%s",frase);

    return 0;
}