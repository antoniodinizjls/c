#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	float a,b,resultado;
	
	printf("Digite um valor \n");
	scanf("	%f",&a);
	
	printf("Digite outro valor\n");
	scanf("	%f",&b);
	
	resultado = (a+b)/2;
	printf("A média dos valores é igual a: %.2f", resultado);
	
	return 0;
}
