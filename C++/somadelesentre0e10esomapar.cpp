#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float a,b;
	int soma;
	
	printf("Digite dois números \n");
	scanf("%f %f",&a,&b);	
	
	soma = a+b;
	if ((a+b)>10 && (a+b)>=10){
		printf(" A soma entre %.1f e %.1f está entre 0 e 10\n" ,a,b);
	
	}
	if (soma%2==0){
		printf("A soma dos números é par \n");
		
	} else{
		printf("A soma dos números não é par\n");
	}

		return 0;
}
