#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int a,b;
	
	setlocale(LC_ALL,"");
	
	
	printf("Digite dois números \n");
	
	scanf("%i %i",&a,&b);
	
	if ((a>=5 && a<=10) && (b>=5 && b<=10)){
		
		printf("A soma entre os valores %i e %i é igual a: %i\n",a,b,a+b);
		
	} else{
		printf("Os núumeros não estão no intervalo desejado\n");
	}
	
	
	return 0;
}
