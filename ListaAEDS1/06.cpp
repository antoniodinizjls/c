#include <stdio.h>
int main() {
    int n=0, i = 0;
    
    long long a = 0, b = 1, proximo;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    printf("Os primeiros %d termos da sequência de Fibonacci são:\n", n);
    
    while (i < n) {
        if(i <= 1) {
            proximo = i; 
        } else{
            proximo = a + b; 
            a =b; 
            b = proximo; 
        }
        printf("%lld ", proximo); 
        i++;
    }
    
    printf("\n");
    return 0;
}