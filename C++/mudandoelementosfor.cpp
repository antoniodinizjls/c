#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,l,s,u;
	
	setlocale(LC_ALL,"");
	
	printf("Digite o IN�CIO, LIMITE E O INCREMENTO");
	
	scanf(" %i %i %i",&i,&l,&s);
	
	for(u=i;u<=l;u=u+s){
		printf("N�mero %i \n",u);
		
	}
	
	return 0;
}
