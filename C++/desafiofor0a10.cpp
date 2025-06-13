#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	int i;
	
	setlocale(LC_ALL,"");
	
	for(i=0;i<=10;i++){
		
		if(i%2==0){
			printf(" %i \n",i);
		} else{ 
			//printf("Nada \n");
		}
	}
	
	
	return 0;
}
