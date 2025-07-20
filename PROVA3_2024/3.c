#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    int idade;
    char nome[100];
};

int main(){
    struct aluno p1;
    char total[100];
    FILE *arquivo;
    arquivo  = fopen("antonio.txt","w"); 
    p1.idade = 12;
    strcpy(p1.nome,"Antonio");
    printf("Str copiado %s\n",p1.nome);
    fprintf(arquivo,"Nome: %s",p1.nome);
    fprintf(arquivo,"\n");
    fprintf(arquivo,"Idade: %d",p1.idade);
    fclose(arquivo);
    arquivo = fopen("antonio.txt", "r");
    while(fgets(total,100,arquivo)){
        printf("%s\n",total);
    }

    return 0;
}