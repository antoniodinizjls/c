#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a;
	setlocale(LC_ALL,"");
	
	printf("Digite algum n�mero\n");
	scanf("%f", &a);
	if ((a<=10) && (a>=0)){
		printf("O n�mero digitado est� entre 0 e 10 \n");
		return 0;
	} else{
		printf("O n�mero digitado n�o est� entre 0 e 10 \n");
	}
	
	return 0;
}
