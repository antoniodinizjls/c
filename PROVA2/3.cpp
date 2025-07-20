#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char palavras[4][41] = {0};
    int indice = 0;
    int iguais = 0;
    char auxiliar[41] = {};
    int tamanho2 = 0;
    int tamanho4 = 0;
    int menorTamanho = 0;
    char vogais[6] = {'a', 'e', 'i', 'o', 'u', '\0'};
    int ehVogal2 = 0;
    int ehVogal4 = 0;
    int totalVogais2 = 0;
    int totalVogais4 = 0;

    do
    {
        iguais = 0;
        scanf("%s", palavras[indice]);
        for (int i = 0; i < indice; i++){
            if (strcmp(palavras[i], palavras[indice]) == 0){
                iguais = 1;
                indice--;
            }
        }
        indice++;
    } while (indice != 4 || iguais == 1);

    // ordenação em ordem crescente
    for (int i = 0; i < 3; i++){
        for (int j = i + 1; j < 4; j++){
            if (strcmp(palavras[i], palavras[j]) > 0){
                strcpy(auxiliar, palavras[i]);
                strcpy(palavras[i], palavras[j]);
                strcpy(palavras[j], auxiliar);
            }
        }
    }

    tamanho2 = strlen(palavras[1]);
    tamanho4 = strlen(palavras[3]);

    if (palavras[1][tamanho2 - 1] == palavras[3][tamanho4 - 1]){
        printf("A ultima letra da 2a e 4a palavras ordenadas sao iguais\n");
    }

    if (tamanho2 < tamanho4){
        menorTamanho = tamanho2;
    }
    else{
        menorTamanho = tamanho4;
    }

    for (int i = 0; i < menorTamanho; i++){
        ehVogal2 = 0;
        ehVogal4 = 0;

        for (int j = 0; j < 5; j++){
            if (tolower(palavras[1][i]) == vogais[j])
            {
                ehVogal2 = 1;
            }

            if (tolower(palavras[3][i]) == vogais[j])
            {
                ehVogal4 = 1;
            }
        }

        printf("Na %da posicao, existem %d consoantes\n", i + 1, 2 - ehVogal2 - ehVogal4);
    }

    for (int i = 0; i < tamanho2; i++){
        ehVogal2 = 0;
        for (int j = 0; j < 6; j++){
            if (tolower(palavras[1][i]) == vogais[j])
            {
                ehVogal2 = 1;
            }
        }
        if (ehVogal2 == 1)
        {
            totalVogais2++;
        }
    }

    for (int i = 0; i < tamanho4; i++){
        ehVogal4 = 0;
        for (int j = 0; j < 6; j++){
            if (tolower(palavras[3][i]) == vogais[j]){
                ehVogal4 = 1;
            }
        }
        if (ehVogal4 == 1){
            totalVogais4++;
        }
    }

    if (totalVogais2 > totalVogais4){
        printf("A 2a palavra tem mais vogais, com %d, ja a 4a tem %d\n", totalVogais2, totalVogais4);
    }
    else if (totalVogais4 > totalVogais2){
        printf("A 4a palavra tem mais vogais, com %d, ja a 2a tem %d\n", totalVogais4, totalVogais2);
    }
    else{
        printf("Ambas 4a e 2a palavra tem vogais em quantidades iguais, com %d cada\n", totalVogais2);
    }

    // mostrar palavras ordenadas
    printf("\nPalavras ordenadas:\n");
    for (int i = 0; i < 4; i++){
        printf("%s\n", palavras[i]);
    }

    return 0;
}
