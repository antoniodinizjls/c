#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Defini��o de constante no cabe�alho
#define INTEIRO 5
#define letra 'a'



int main(){
	
	const int cinco = 5;
	
	setlocale(LC_ALL,"");
	printf("O valor de inteiro � %i \n",INTEIRO);
	printf("O caractere atribu�do a constante letra � %c \n",letra);
	printf("A constante cinco est� com o valor %i \n",cinco);
	
	
	
	
	return 0;
}
