#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
   
   	setlocale(LC_ALL,""); // seta que o idioma usado ser� o do computador
    int a = 5;
    float b = 6;
	printf("Ol� digite algum n�mero\n");
	scanf("%f",&b);
	printf("O valor digitado foi %f",b);
    return 0;
	
};
s
