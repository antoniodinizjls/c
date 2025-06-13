#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int i,s=0;
	
	setlocale(LC_ALL,"");
	
	for(i=0;i<=10;i++){
		s=s+i;
	}
	printf("A soma total entre 0 e 10 é igual a %i",s);
	
	
	
	return 0;
}
