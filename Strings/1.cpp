#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    
    char carro[]  = "corsa";
    // printf("%i", strlen(carro));
    char input[255];
    setbuf(stdin, NULL);
    fgets(input, sizeof(input),stdin);
    int res = strcmp(carro,input);
    if (res != 1){
        printf("strings iguais \n");
    }else{
        printf("strings diferentes \n");
    }
    // printf("%d\n", strcmp(carro, input));
    return 0;
}