#include<stdio.h>
#include<stdlib.h> // random num
#include<time.h> // random biblioteca
#include<locale.h> // biblioteca para idiomas

int main(){
	setlocale(LC_ALL,"");
	
	srand(time(NULL)); // Usa o tempo atual como semente
	
	int r = rand() %10; // cria um n�mero aleat�rio de 0 a 9
	// extra�mos o resto da divis�o do n�mero para criar um n�mero rand�mico
	
	printf("N�mero gerado: %d",r);
	return 0;
}
