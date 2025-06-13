#include <cstddef>
#include <cstdio>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char vetor[255];
    char vogais[10] = {'A','E','I','O','U','a','e','i','o','u'};
    int vogal = 0;
    printf("Digite alguma string\n");

    setbuf(stdin,NULL);
    
    fgets(vetor, sizeof(vetor),stdin);
   
    // printf("%s",vetor);

   for(int i = 0; vetor[i] != '\0';i++){
        for(int  k = 0; k < 10; k++){
            if(vetor[i] == vogais[k]){
                // printf("igual \n");
                vogal++;
            }
        }
   }
   int consoantes =  (strlen(vetor)) - vogal -1;


   printf("Qtd de consoantes %i\n", consoantes);
   printf("Qtd de vogais %i\n", vogal);
    return 0;
}
