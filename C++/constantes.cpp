#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//Definição de constante no cabeçalho
#define INTEIRO 5
#define letra 'a'



int main(){
	
	const int cinco = 5;
	
	setlocale(LC_ALL,"");
	printf("O valor de inteiro é %i \n",INTEIRO);
	printf("O caractere atribuído a constante letra é %c \n",letra);
	printf("A constante cinco está com o valor %i \n",cinco);
	
	
	
	
	return 0;
}
