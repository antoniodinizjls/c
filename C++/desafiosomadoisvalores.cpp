#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a,b;
	printf("Digite um valor para A \n");
	scanf("%f", &a);
	printf("Digite um valor para B \n");
	scanf("%f",&b);
	
	if ((a+b)>=10) {
		printf("A soma dos valores informados é maior ou igual a 10\n");
		abort();
	} else{
		printf("A soma dos valores informados não é maior ou igual a 10 \n");
		return 0;
	}
	return 0;
}
