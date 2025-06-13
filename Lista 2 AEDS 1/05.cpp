#include<stdio.h>

int main(){
    float vph,nhoras,extnhoras,dependentes,salario,salariocomimposto,pdependente,horas;
    printf("Digite o valor pago por hora trabalha\n");
    scanf("%f",&vph);
    printf("Digite o número de horas trabalhadas\n");
    scanf("%f",&nhoras);
    printf("Digite o número de hora extras trabalhadas \n");
    scanf("%f",&extnhoras);
    printf("Digite o número de dependentes\n");
    scanf("%f",&dependentes);
    horas=extnhoras+nhoras;
    salario= vph*horas;
    pdependente= dependentes*128;
    salario+=pdependente;
    if(salario<=1434.59){
        salariocomimposto=salario;
    }
    if((salario>=1434.60)&&(salario<=2150)){
        salariocomimposto= salario-(salario*0.075);
    }
    if((salario>=2150.01)&&(salario<=2866.70)){
        salariocomimposto= salario-(salario*0.15);
    }
    if((salario>=2866.71)&&(salario<=3582)){
        salariocomimposto= salario-(salario*0.225);
    }
    if(salario>3582.01){
        salariocomimposto=salario-(salario*0.275);
    }
    if(salariocomimposto<=500){
        salariocomimposto= salariocomimposto+180;
    }else if(salariocomimposto<=1000){
        salariocomimposto=salariocomimposto+120;
    }else if(salario>1000){
        salariocomimposto=salariocomimposto+100;
    }
    printf("O salário final do empregado é R$%.2f",salariocomimposto);


    return 0;
}