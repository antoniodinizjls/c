#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
				
int main(){
	
	setlocale(LC_ALL,""); // seta que o idioma usado ser� o do computador
    int a = 5;
    float b = 6;

	printf("Ol� digite algum n�mero\n");
	scanf("%f",&b);
	
	char c = 't';
	printf("Digite algum caracter\n");
	scanf(" %c",&c); // inserir espa�o antes do por conta do problema de buffer
	
	printf("O caracter digitado foi cad = %c", c);
}	
