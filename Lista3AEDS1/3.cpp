// Utilizando DO WHILE escreva o menu de opções abaixo. Leia a opção do
// usuário e execute a operação escolhida. Escreva uma mensagem de erro
// se a opção for inválida e repita a exibição do menu.
// Escolha a opção:
// 1 - Soma de 2 números.
// 2 - Diferença entre 2 números (maior pelo menor).
// 3 - Produto entre 2 números.
// 4 - Divisão entre 2 números (o denominador não pode ser zero).
#include<stdio.h>

int main(){
    int escolha=0;
    float a=0,b=0;
    do{
        printf("Escolha a opção:\n"
            "1 - Soma de 2 números\n"
            "2 - Diferença entre 2 números (maior pelo menor)\n"
            "3 - Produto entre 2 números\n"
            "4 - Divisão entre 2 números (o denominador não pode ser zero)\n");
            scanf("%i",&escolha);
            switch(escolha){
        case 1:{
            printf("Digite dois números\n");
            scanf("%f %f",&a,&b);
            printf("A soma é igual a %f\n",(a+b));
            continue;
        }
        case 2:{
            printf("Digite dois números\n");
            scanf("%f %f",&a,&b);
            printf("A soma é igual a %f\n",(a-b));
            continue;
        }
        case 3:{
            printf("Digite dois números\n");
            scanf("%f %f",&a,&b);
            printf("A soma é igual a %f\n",(a*b));
            continue;
        }
        case 4:{
            printf("Digite dois números\n");
            scanf("%f %f",&a,&b);
            printf("A soma é igual a %f\n",(a/b));
            continue;
        }
    }
        }while(true);
    return 0;
}