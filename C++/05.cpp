#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>

int main(){
	setlocale(LC_ALL,"");
	int a =5;
	bool d = true;
	bool b = false;
	
	printf("A operação entre %b e %b é igual a %b",b,d, b or d);
	
	
	return 0;
}
