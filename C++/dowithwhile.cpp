#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i=10;
	
	do{
		printf("%i\n",i);
		printf("Estude arrombado\n");
		printf("Executado \n");
		i=i-1;	
	} while(i>-1);
	
	
	
	return 0;
}
