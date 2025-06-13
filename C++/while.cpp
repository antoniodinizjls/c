#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	int i=0;
	
	setlocale(LC_ALL,"");
	
	while(i<=10){
		
		printf("%i\n",i);
		i=i+1;
	}
	
	
	return 0;
}
