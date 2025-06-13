#include <stdio.h>
int main (){
    int num1 = 0;
    int num2 = 0;
    int opcao = 0;
    do {
        printf ("Digite o primeiro numero: ");
        scanf ("%d", &num1);
        printf ("Digite o segundo numero: ");
        scanf ("%d", &num2);
        printf ("O que deseja fazer com esses numeros?\n1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n5-Sair do programa\n");
        scanf ("%d", &opcao);
        if (opcao == 1){
            printf ("%d + %d = %d\n", num1 , num2 , num1+num2);
        } else if (opcao == 2){
            printf ("%d - %d = %d\n", num1 , num2 , num1-num2);
        } else if (opcao == 3){
            printf ("%d x %d = %d\n", num1 , num2 , num1*num2);
        } else if (opcao == 4){
            printf ("%d / %d = %d\n", num1 , num2 , num1/num2);
        }
    }while (opcao != 5);
    return 0;
}