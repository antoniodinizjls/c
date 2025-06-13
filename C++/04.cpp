#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int main(){
	setlocale(LC_ALL,"");
	//Definindo variáveis
	int a = 5 , b = 3;
	bool d;
	
	printf("A soma de A e B é igual a %d\n", a+b);
	printf("A divisão entre %d e %d é igual a %d\n", a,b,a/b);
	printf("A multiplicação entre %d e %d é igual a %d\n",a,b,a*b);
	printf("A subtração entre %d e %d é igual a %d", a,b, a-b);
	
	
	printf("\n O valor absoluto de -3 é igual a %d",abs(-3)); // abs(argumento) força um argumento 
	// a sempre ir para positivo, NUNCA PARA NEGATIVO
	 
	
	return 0;
}
