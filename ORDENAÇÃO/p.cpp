

//EXEMPLO TIME()

#include<stdio.h>
#include <time.h>

int main() {
	time_t tempo = time(NULL);
	printf(ctime(&tempo));

	time(&tempo);
	printf("Outro teste: %s", ctime(&tempo));

	return 0;
}