#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a,b,dif;
	
	setlocale(LC_ALL,"");
	
	printf("Digite algum valor\n");
	scanf("	%f",&a);
	
	printf("Digite outro valor \n");
	scanf("	%f",&b);
	
	dif=a-b;	
	
	printf("A diferen�a absoluta entre os n�meros � igual a %.3f\n", dif=abs(dif));
	
	
	return 0;
}
