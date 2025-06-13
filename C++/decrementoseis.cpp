#include<stdio.h>
#include<stdio.h>
#include<locale.h>

int main(){
	
	int i=50;
	
	setlocale(LC_ALL,"");
	
	while(i>-1){
		
		printf("%i \n",i);
		i=i-6;
	}
	
	
	return 0;
}
