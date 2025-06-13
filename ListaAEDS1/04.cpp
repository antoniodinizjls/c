#include <stdio.h>
int main (){
    int a = 0;
    int b = 0;
    int multT = 0;
    int multC = 0;
    printf ("Digite o valor de A: ");
    scanf ("%d", &a);
    printf ("Digite o valor de B: ");
    scanf ("%d", &b);
    int i = 0;
    if (a<b){
        int i = a;
        for (; i<=b; i++){
            if (i%3==0 || i%5==0){
                printf ("%d\n", i);
            }
            i++;
        }
    }
    else if (a>b){
        int i = b;
        for (; i<=a; i++){
            if (i%3==0 || i%5==0){
                printf ("%d\n", i);
            }
            i++;
        }
    }
    return 0;
}