#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	int a,b;
	setlocale(LC_ALL,"");
	
	printf("Digite dois n�meros\n");
	scanf("%i %i",&a,&b);
	
	if ((a%2==0) || (b%2==0)){
		printf(" Um dos n�meros � par \n");
		return 0;
	} else{
		printf("Nenhum dos n�meros � par \n");
	}
	
	return 0;
}
