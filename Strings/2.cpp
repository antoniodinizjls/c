#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char palavra[4][100];
    char ordem[4][100];
    char temp[1][100];
    int i = 0, j = 0, maior = 0;

    for(i = 0; i < 5; i++){
        setbuf(stdin, NULL);
        printf("Digite uma palavra\n");
        // setbuf(stdin, NULL);
        fgets(palavra[i], sizeof(palavra[0]), stdin);
    }
    for( i =  0; i < 5 -1; i++){
        for(j = 0; j < 5 -1; j++){
            if(strcmp(palavra[j],palavra[j+1]) > 0){
                strcpy(temp[0],palavra[j]); // pega o da frente e coloca no auxiliar
                strcpy(palavra[j],palavra[j+1]); // pega o da frente e joga para trás
                strcpy(palavra[j+1],temp[0]);  // pega o da frente e copia para ele o de trás
            }
        }
    }

    // printf("A primeira alfabeticamente é %s",palavra[maior]);
    system("cls"); // limpa terminal
    for(i = 0; i <=4; i++){
        printf("%s\n",palavra[i]);
    }
    return 0;
}