#include <stdio.h>

int main() {
    int numeros[30];
    int i, j, n;
    int contagem[30];

    // Recebendo inputs
    for (n = 0; n < 30; n++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[n]);
    }
    for(i = 0; i<=29;i++){
        contagem[i]
    }
    // Ordenando os números (Bubble Sort)
    int aux;
    for (i = 0; i < 30 - 1; i++) {
        for (j = 0; j < 30 - i - 1; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    // Mostrando lista crescente sem repetidos
    printf("\nLista crescente sem elementos repetidos:\n");
    for (i = 0; i < 30; i++) {
        // Verifica se o número já apareceu antes
        duplicado = 0;
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                contagem[i+1] = 0;
                break;
            }
        }
        if (!duplicado) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}
