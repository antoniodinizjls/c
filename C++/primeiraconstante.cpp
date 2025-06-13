#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define LIMITE 10

int main(){
	int i=0;
	setlocale(LC_ALL,"");
	for(i=0;i<=LIMITE;i++){
		printf("%i \n",i);
		
	}	
	return 0;
}
