#include <stdio.h>

int main() {
    int num;
    int soma = 0;
    int cont = 0;
    float media;

    do {
        printf("Digite um número inteiro positivo (ou um número negativo para sair): ");
        scanf("%d", &num);

        if (num >= 0) {
            soma += num; 
            cont++; 
        }
    } while (num >= 0); 

    if (cont > 0) {
        media = (float) soma / cont; // Calcula a média
        printf("A média dos números digitados é: %.2f\n",media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}
