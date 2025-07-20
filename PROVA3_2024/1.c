#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char nome[100];
    int id;
    float salario;
    char dtc[20] ;
}funcionario;

void cadastro(funcionario **p2, int *len){
    if(*len != 1){
        len++;
        *p2 = realloc(p2, (*len * sizeof(funcionario)));
        printf("Digite o nome do funcionario \n");
        scanf("%s",&p2[*len]->nome);
        printf("Digite o ID do salario\n");
        scanf("%d",&p2[*len]->id);
        printf("Digite o salario do funcionario\n");
        scanf("%f",&p2[*len]->salario);
        printf("Digite o dia de contratacao do funcionario DIA/MES/ANO\n");
        scanf("%s",&p2[*len]->dtc);
    }else{
        printf("Digite o nome do funcionario \n");
        scanf("%s",&p2[0]->nome);
        printf("Digite o ID do salario\n");
        scanf("%d",&p2[0]->id);
        printf("Digite o salario do funcionario\n");
        scanf("%f",&p2[0]->salario);
        printf("Digite o dia de contratacao do funcionario DIA/MES/ANO\n");
        scanf("%s",&p2[0]->dtc);
    }
}
void listar(funcionario **p2, int *len){
    system("CLS");
    for (int i = 0; i < *len; i++){
        printf("Funcionario %d\n",len);
        printf("Nome: %s\n",p2[i]->nome);
        printf("Id do funcionario %d\n",p2[i]->id);
        printf("Salario do funcionario %f\n",p2[i]->salario);
        printf("Dia de contratacao %s\n",p2[i]->dtc);
        printf("\n\n");
    }
    printf("LEN ATUAL: %d",*len);
}


int main(){
    int len = 1, escolha = 0;
    funcionario *p2 = (funcionario* ) malloc(1 * sizeof(funcionario));
    
    if (p2 == NULL){
        printf("Erro na alocacao de memoria\n");
        return 1;
    }
    cadastro(&p2,&len);
    listar(&p2,&len);
    // while(1){
    //     switch(escolha){
    //         case 1:
    //             cadastro(&p2,len);
    //         case 2:
    //         case 3:
    //         case 4:
    //         case 5:
    //         case 6:
    //         case 7:
    //             break;
    //     }
    // }





    return 0;
}