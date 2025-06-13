#include <stdio.h>

int main() {
  int x;

    printf("Informe um valor x: ");
    scanf("%d", &x);

    int a = x / 2;

    for(int i = 0; i < x / 2; i++) {
      printf("%d + %d; ", (a - i), (x - a + i));
    }
  
    return 0;
}

/*
21.Encontrar todos os pares de números cuja soma seja igual a um valor
X com for: peça um número X e mostre todos os pares (a, b) com 1 ≤ a ≤ b ≤ X tal que a + b = X.
*/