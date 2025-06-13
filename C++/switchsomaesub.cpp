#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	
	int opc,a,b;
	
	setlocale(LC_ALL,"");
	
	printf("Digite as opções\n -1 Somar \n 2- Subtração\n");
	scanf("%i",&opc);
	
	printf("Digite A e B\n");
	
	scanf("	%i %i",&a,&b);
	
	switch(opc){
		
		case 1:
			printf("A soma dos números é igual a %i\n",(a+b));
			break;
		case 2:
			printf("A substração entre os números é igual a %i\n",(a-b));
			break;
	}
	
	
	return 0;
}
