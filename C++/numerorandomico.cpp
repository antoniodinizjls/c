#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<time.h>

int main(){
	
	int i,a,s=0,b;
	
	setlocale(LC_ALL,"");
	
	for(i=0;i<3;i++){
		printf("N�mero sorteado %i\n", a = rand() % 5 + 1);
		
		s=s+a;	
	}
	printf("A soma dos n�meros sorteados � igual a %i",s);
	
	
	return 0;
}
