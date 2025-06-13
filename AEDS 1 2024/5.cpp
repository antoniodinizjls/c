#include<stdio.h>
#include<string.h>
// RESOLUÇÃO DA QUESTÃO NÚMERO 3 DE AEDS 1 2024
int main(){
    char palavra[2][100];
    int i = 0, a = 0,soma = 0;
    
    for(i = 0; i<2; i++){
        printf("Digite uma palavra\n");
        setbuf(stdin, NULL);
        fgets(palavra[i],sizeof(palavra[a]),stdin);
    }

    // for(i  = 0; i < 1; i++){
    //     for(a = 0; (a < strlen(palavra[1]) - 1);a++){
    //         if(palavra[0][a]== palavra[1][a]){
    //             printf("  Letras repetidas %c %c\n",palavra[0][a], palavra[1][a]);
    //         }
    //     }
    // }
    int tamanho = strlen(palavra[0]);
    for (i = 0; i < 1; i++) {
        for (a = 0; a < (tamanho -1); a++) {
            for(int j = 0; j < (tamanho -1 ); j++) {
                if (palavra[0][a] == palavra[1][j]) {
                    ++soma;
                    printf("Letra repetida: %c\n", palavra[0][a]);
                    break;
                }
            }
            // if (palavra[0][a] == palavra[(1)][a]) {
            //     printf("Letra repetida: %c\n",palavra[i][a]);
            //     break; 
            // }
        }
    }
    printf("Total de letras repetidas: %d\n", soma);

    return 0 ;
}
