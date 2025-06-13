
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	//definindo tamanho de um vetor com um n�mero
	float antonio[10];
	//definindo tamanho de um vetor com n�mero
	int vetor[3]={1,2,3};
	// definindo tamanho com vari�vel
	char vetorando[] = {'a','b','c'};
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Adicione um número ao vetor Antonio\n");
	scanf(" %f", &antonio[0]);	
	printf("Número digitado  %f \n", antonio[0]);
	
	
	
	return 0;
}
