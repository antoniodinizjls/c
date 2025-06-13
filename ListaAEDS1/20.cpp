#include <stdio.h>

int main() {
  int n, count = 0, num = 2;

  printf("Quantos primos consecutivos voce deseja? ");
  scanf("%d", &n);

  if(n < 1) {
    printf("Quantidade invalida.");
    return 0;
  }

  while(count < n) {
    int i = 2; 
    int primo = 1;

    while(i < num) {
      if (num % i == 0) {
        primo = 0;
        break;
      }
      i++;
    }

    if(primo) {
      printf("%d ", num);
      count++;
    }

    num++;
  }

  return 0;
}