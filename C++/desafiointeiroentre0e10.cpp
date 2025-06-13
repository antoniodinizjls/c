#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a;
	setlocale(LC_ALL,"");
	
	printf("Digite algum número\n");
	scanf("%f", &a);
	if ((a<=10) && (a>=0)){
		printf("O número digitado está entre 0 e 10 \n");
		return 0;
	} else{
		printf("O número digitado não está entre 0 e 10 \n");
	}
	
	return 0;
}
