//Switch case

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int option;
	setlocale(LC_ALL,"");
	printf("Digite algum n�mero como op��o\n");
	scanf("%i",&option);
	switch(option){
		case 1:
			printf("Magrinha Rabuda\n");
			break;
		case 2:
			printf("G�tica\n");
			break;
		case 3:
			printf("LCR\n");
			break;	
	}
	printf("Fim da execu��o de c�digo\n");
	return 0;
}
