#include <stdio.h>


int primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 0;
}
int main() {
    int termos = 20;
    int fib[20];
    
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < termos; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("Números primos da sequencia de fibonacci:\n");
    for (int i = 0; i < termos; i++) {
        if (primo(fib[i])) {
            printf("%d ", fib[i]);
        }
    }
    return 0;
}
