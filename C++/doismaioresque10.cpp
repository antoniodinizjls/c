#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a,b;
	setlocale(LC_ALL,"");
	
	printf("Digite dois n�meros\n");
	scanf("%f %f",&a,&b);
	
	if(a>10 || b>10){
		printf("Um dos n�meros digitados � maior que 10 \n");
		return 0;
	} else{
		printf("Nenhum dos n�meros digitados � maior que 10 \n");
	}
	
	return 0;
}
