#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int main(){
	setlocale(LC_ALL,"");
	//Definindo vari�veis
	int a = 5 , b = 3;
	bool d;
	
	printf("A soma de A e B � igual a %d\n", a+b);
	printf("A divis�o entre %d e %d � igual a %d\n", a,b,a/b);
	printf("A multiplica��o entre %d e %d � igual a %d\n",a,b,a*b);
	printf("A subtra��o entre %d e %d � igual a %d", a,b, a-b);
	
	
	printf("\n O valor absoluto de -3 � igual a %d",abs(-3)); // abs(argumento) for�a um argumento 
	// a sempre ir para positivo, NUNCA PARA NEGATIVO
	 
	
	return 0;
}
