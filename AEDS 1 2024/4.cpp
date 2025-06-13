#include<stdio.h>
#include<string.h>

int main(){
    int a = 0, i = 0;
    char palavra[2][100];
    while (a < 2){
        
        printf("Digite uma palavra\n");
        setbuf(stdin, NULL);
        fgets(palavra[a],sizeof(palavra[0]),stdin);

        ++a;
    }
    
    // for( i = 0; i < 1; i++){
    //     for(a = 0; palavra[1][a] != '\0'; a++){
    //         if(palavra[i][a] == palavra[(i+1)][a]){
    //             printf("Letras iguais %c, %c\n",palavra[i][a],palavra[(i+1)][a]);
    //         }
    //     }
    // }
    int tamanho =  strlen(palavra[1]); // para burlar o problema de iterar mais uma vez no final
    for(a = 0; a  < (tamanho-1); ++a){
            for( i = 0; i < (tamanho - 1); i++){
                // printf("%d",a);
            if(palavra[0][a] == palavra[1][i]){
                printf("Letras iguais %c, %c\n",palavra[i][a],palavra[(1)][a]);
            }
            //printf("%d",a);
        }
    }


    return 0;
}