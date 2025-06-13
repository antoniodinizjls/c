#include <stdio.h>

int main() {
    int cont = 1;
    int numero;
    int maior, menor;

    printf("Digite o 1º número: ");
    scanf("%d", &numero);

    
    maior = menor = numero;

    while (cont<10) {
        cont++;
        printf("Digite o %dº número: ", cont);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}
