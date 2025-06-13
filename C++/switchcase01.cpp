//Switch case

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int option;
	setlocale(LC_ALL,"");
	printf("Digite algum número como opção\n");
	scanf("%i",&option);
	switch(option){
		case 1:
			printf("Magrinha Rabuda\n");
			break;
		case 2:
			printf("Gótica\n");
			break;
		case 3:
			printf("LCR\n");
			break;	
	}
	printf("Fim da execução de código\n");
	return 0;
}
