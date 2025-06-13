#include <stdio.h>

int main() {
    int num1, num2;
    int soma1 = 0, soma2 = 0;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    for (int i = 1; i < num1; i++) {
        if (num1 % i == 0) {
            soma1 += i;
        }
    }
    for (int i = 1; i < num2; i++) {
        if (num2 % i == 0) {
            soma2 += i;
        }
    }
    if (soma1 == num2 && soma2 == num1) {
        printf("%d e %d são números amigos.\n", num1, num2);
    } else {
        printf("%d e %d NÃO são números amigos.\n", num1, num2);
    }
    return 0;
}
