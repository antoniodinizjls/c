#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float a,b,c;
	setlocale(LC_ALL,"");
	
	printf("Digite tr�s n�meros \n");
	scanf("%f %f %f",&a,&b,&c);
	
	if ((a>10)&&(b>10)&&(c>10)){
		printf("Os tr�s n�meros s�o maiores que 10 :--> %.2f %.2f %.2f \n",a,b,c);	
		return 0;
	} else{
		
		printf("Os tr�s n�meros digitados n�o s�o maiores que 10\n");
	}
	
	
	return 0;
}
