#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    // Verifica se o número é positivo
    if (num <= 0) {
        printf("Por favor, digite um número inteiro positivo.\n");
        return 1; 
    }
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i; // Adiciona o divisor à soma
        }
    }
    if (soma == num) {
        printf("%d é um número perfeito.\n", num);
    }else {
        printf("%d não é um número perfeito.\n", num);
    }

    return 0;
}
