#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char palavra[5][100];
    char temp[1][100];
    int i = 0, j = 0;

    while(i < 5){
        printf("Digite uma string \n");
        setbuf(stdin,NULL);
        fgets(palavra[i],sizeof(palavra), stdin);
        i++;   
    }
    // system("cls");
    // for( i = 0; i < 5; i++){
    //     printf("%s\n",palavra[i]);
    // }
    for(i = 0; i < 5; i++){
        for( j = 0; j < 5; j++){
            if(strcmp(palavra[j],palavra[(j+1)]) > 0) {
               strcpy(temp[0],palavra[j]);
               strcpy(palavra[j],palavra[(j+1)]);
               strcpy(palavra[(j+1)],temp[0]); 
            }
        }
    }
    printf("Ordem alfabetica\n");
    for(i = 0; i < 5; i++){
        printf("%s",palavra[i]);
    }

    return 0;
}