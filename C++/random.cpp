#include<stdio.h>
#include<stdlib.h> // random num
#include<time.h> // random biblioteca
#include<locale.h> // biblioteca para idiomas

int main(){
	setlocale(LC_ALL,"");
	
	srand(time(NULL)); // Usa o tempo atual como semente
	
	int r = rand() %10; // cria um número aleatório de 0 a 9
	// extraímos o resto da divisão do número para criar um número randômico
	
	printf("Número gerado: %d",r);
	return 0;
}
