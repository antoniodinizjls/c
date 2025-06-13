#include <stdio.h>

int main() {
  int a, b;

  printf("Digite dois numeros: ");
  scanf("%d %d", &a, &b);

  int temp_a = a;

  if(b > a) {
    a = b;
    b = temp_a;
  }

  while(b != 0) {
    int temp_b = a % b;
    a = b;
    b = temp_b;
  }

  printf("O MDC vale %d", a);

  return 0;
}

