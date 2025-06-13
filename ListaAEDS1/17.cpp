#include <stdio.h>

int main() {
    int valor, nota;
    int notas_disponiveis[] = {100, 50, 20, 10, 5, 2, 1};
    int i = 0;

    printf("Digite o valor para saque: ");
    scanf("%d", &valor);

    if (valor <= 0) {
        printf("Valor inválido. Digite um número maior que zero.\n");
        return 1;
    }
    printf("Notas necessárias para o valor de R$ %d:\n", valor);
    while (valor > 0) {
        nota = notas_disponiveis[i];
        int quantidade = valor / nota;

        if (quantidade > 0) {
            printf("%d nota(s) de R$ %d\n", quantidade, nota);
            valor %= nota;
        }
        i++;
    }

    return 0;
}
