#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a,b,c,d,res;
	setlocale(LC_ALL,"");
	
	printf("Digite quatro vari�veis: \n");
	scanf("%f %f %f %f", &a,&b,&c,&d);
	printf("O resultado da multiplica��o dos quatro � %f", res=(a*b*c*d));
	
	
	return 0;
}
