#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a,b;
	setlocale(LC_ALL,"");
	
	printf("Digite dois números\n");
	scanf("%f %f",&a,&b);
	
	if(a>10 || b>10){
		printf("Um dos números digitados é maior que 10 \n");
		return 0;
	} else{
		printf("Nenhum dos números digitados é maior que 10 \n");
	}
	
	return 0;
}
