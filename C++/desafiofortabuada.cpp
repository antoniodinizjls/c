#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,m;
	setlocale(LC_ALL,"");	
	
	printf("Digite um número para ser somado \n ");
	scanf("%i",&m);
	printf("\n");
	
	for(i=1;i<=10;i++){
		printf("%i \n",i*m);
	}
	
	return 0;
}

