#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int j=10,l;
	
	printf("Digite um número\n");
	scanf("%i",&l);
	
	while(l>=j){
		
		if ((j%2)==0){
			printf("Este número é par %i\n",j);
		}
		j=j+1;		
	}


	return 0;
}


