#include <stdio.h>
int main (){
    int num = 0;
    printf ("Digite um numero: ");
    scanf ("%d", &num);
    for (int i = 1; i<=num;i++){
        printf ("%d x 1 = %d\n", i, i*1);
        printf ("%d x 2 = %d\n", i, i*2);
        printf ("%d x 3 = %d\n", i, i*3);
        printf ("%d x 4 = %d\n", i, i*4);
        printf ("%d x 5 = %d\n", i, i*5);
        printf ("%d x 6 = %d\n", i, i*6);
        printf ("%d x 7 = %d\n", i, i*7);
        printf ("%d x 8 = %d\n", i, i*8);
        printf ("%d x 9 = %d\n", i, i*9);
        printf ("%d x 10 = %d\n", i, i*10);
    }
    return 0;
}