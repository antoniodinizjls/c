#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int res;
	
	printf("Digite algum n�mero \n");
	scanf("%i", &res);
	
	if((res%2)==0){
		printf("O n�mero digitado � par \n");
		return 0;
	} else{
		printf("O n�mero n�o � par \n");
	}
	return 0;
}
