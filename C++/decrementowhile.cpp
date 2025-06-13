#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


// Exemplo de while decrescente


int main(){
	// setando as variáveis	
	int i=10;
	//colocando idioma
	setlocale(LC_ALL,"");
	//criando o while com menos -1 para poder decrementar depois
	while(i>-1){
		
		printf(" %i\n",i);
		
		i=i-1;
	}
	
	
	
	
	return 0;
}
