#include<stdio.h>
#include<stdlib.h>

struct aluno{
    int idade;
    char nome[100];
}

int main(){
    char minhastring[100];
    FILE *arquivo;
    arquivo =  fopen("antonio.txt", "w");
    fprintf(arquivo, "Antonio");
    fclose(arquivo);
    arquivo = fopen("antonio.txt", "r");

    while(fgets(minhastring,100,arquivo)){
        printf("%s",minhastring);
    }
    printf("Passei por aqui\n");


    fclose(arquivo);
    return 0;
}