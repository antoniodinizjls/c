#include <stdio.h>
int primo(int numero) {
    if (numero <= 1) {
        return 0; 
    }
    for (int divisor = 2; divisor * divisor <= numero; divisor++) {
        if (numero % divisor == 0) {
            return 0; // Número não é primo se divisível pelo divisor
        }
    }
    return 1; // Número é primo
}
int main() {
    int inicio, fim;
    printf("Digite o primeiro número: ");
    scanf("%d", &inicio);
    printf("Digite o segundo número: ");
    scanf("%d", &fim);
    if (inicio > fim) {
        printf("O primeiro número deve ser menor ou igual ao segundo número.\n");
        return 1;
    }
    printf("Números primos entre %d e %d:\n", inicio, fim);
    for (int atual = inicio; atual <= fim; atual++) {
        if (primo(atual)) {
            printf("%d ", atual);
        }
    }
    printf("\n");
    return 0;
}