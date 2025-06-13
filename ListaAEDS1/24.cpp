#include <stdio.h>
#include <math.h>

int main() {
    double pi;
    long k = 0, n = 1000000000;
    
    while(k < n) {
      pi += 4 * (pow(-1, k) / (2 * k + 1));
      k++;
    }

    printf("O numero PI e aproximadamente igual a %.6f", pi);
    return 0;
}

