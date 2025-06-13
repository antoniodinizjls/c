#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int vetorando[]={1,2,3};
	int a=0,i;
	setlocale(LC_ALL,"");
	
	for(i=0;i<=3;i++){
		a=a+vetorando[i];
	}
	printf("O valor da soma dos vetores é igual a %i\n",a);
	
	printf("%lu",sizeof(vetorando));
	
	return 0;
}
