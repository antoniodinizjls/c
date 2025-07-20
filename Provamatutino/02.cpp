#include<stdio.h>

int main(){
    float altura = 0, peso = 0;
    float imc = 0;

    printf("Digite a altura e peso de uma pessoa \n");
    scanf("%f %f",&altura, &peso);

    imc  = peso / (altura*altura);

    imc < 17 ? printf("Muito abaixo do peso \n") : NULL;
    imc > 17 && imc <= 18.49 ? printf("Abaixo do peso \n") : NULL;
    imc >= 18.5 && imc <= 24.99 ? printf("Peso normal \n") :  NULL;
    imc >= 25 && imc <= 29.99 ? printf("Acima do peso \n") : NULL;
    imc >= 30 && imc <= 34.99 ? printf("Obesidade 1 \n") : NULL;
    imc >= 35 ? printf("Obesidade 2 \n") : NULL;
    return 0;
}