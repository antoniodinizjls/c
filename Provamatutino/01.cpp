#include<stdio.h>

int main(){
    float a = 0;
    float b = 0;
    float soma = 0;
    float dif = 0;
    float multi = 0, div = 0;

    printf("Digite dois numeros \n");
    scanf("%f %f", &a, &b);

    soma = a + b;
    printf("A soma dos numeros %.2f\n",soma);

    dif = soma - b;
    printf("Resultado da diferenca %.2f\n",dif);

    multi =  dif * a;
    printf("Multiplicacao da diferenca pelo primeiro %.2f\n",multi);

    div = multi / b;
    printf("Resultado da divisao %.2f\n",div);

    return 0;

}