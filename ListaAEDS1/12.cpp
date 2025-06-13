#include <stdio.h>

int main() {
    int n, num;
    int maior, segundo_maior;

    printf("quantos números deseja digitar N ≥ 2 ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Você deve digitar pelo menos 2 números.\n");
    }
    printf("Digite o 1º número: ");
    scanf("%d", &num);
    maior =num;
    segundo_maior = num;

    printf("Digite o 2º número: ");
    scanf("%d", &num);
    if (num >maior) {
        segundo_maior = maior;
        maior =num;
    }else if (num< maior) {
        segundo_maior =num;
    }
    for (int i = 3; i <= n; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);

        if (num > maior) {
            segundo_maior = maior;
            maior =num;
        } else if (num > segundo_maior && num != maior) {
            segundo_maior =num;
        }
    }

    if (maior == segundo_maior) {
        printf("Não houve um segundo maior distinto (números iguais).\n");
    } else {
        printf("O segundo maior número é: %d\n", segundo_maior);
    }

    return 0;
}
