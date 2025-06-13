#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,l,s,u;
	
	setlocale(LC_ALL,"");
	
	printf("Digite o INÍCIO, LIMITE E O INCREMENTO");
	
	scanf(" %i %i %i",&i,&l,&s);
	
	for(u=i;u<=l;u=u+s){
		printf("Número %i \n",u);
		
	}
	
	return 0;
}
