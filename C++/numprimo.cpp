#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i,j=1;
	
	setlocale(LC_ALL,"");
	
	printf("Digite algum número\n");
	scanf("%i",&i);
	
	while(j<=7){
		printf(" %i / %i tem o resto %i \n",i,j,(i%j));
		j++;	
		}
	return 0;
}
