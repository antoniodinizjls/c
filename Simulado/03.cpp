
#include<stdio.h>
#include<math.h>


int main(int argc, char const *argv[]) {

    int base_10 = 0;
    int base_2 = 0;

    printf("Digite o numero na base 2: ");
    scanf("%d", &base_2);

    int i = 0;
    while (base_2 >= 1) {

        int unidade = base_2 % 10;
        base_2 /= 10;

        if(unidade == 1 || unidade == 0) {
            if (unidade == 1) base_10 += pow(2.0, i);
        } else {
            printf(">>>> O numero digitado nao esta na base 2");
            return 0;
        }
        i++;
    }

    printf("O numero na base 10 eh: %d\n", base_10);

    return 0;
}
