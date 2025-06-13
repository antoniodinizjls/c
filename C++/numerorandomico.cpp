#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
	
	int i,a,s=0,b;
	
	setlocale(LC_ALL,"");
	
	for(i=0;i<3;i++){
		printf("Número sorteado %i\n", a = rand() % 5 + 1);
		
		s=s+a;	
	}
	printf("A soma dos números sorteados é igual a %i",s);
	
	
	return 0;
}
