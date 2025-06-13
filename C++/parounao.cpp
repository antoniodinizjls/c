#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int res;
	
	printf("Digite algum número \n");
	scanf("%i", &res);
	
	if((res%2)==0){
		printf("O número digitado é par \n");
		return 0;
	} else{
		printf("O número não é par \n");
	}
	return 0;
}
