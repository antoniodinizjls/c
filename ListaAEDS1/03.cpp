#include<stdio.h>

// int primos(int *n){
//     int i=0,j=0;
//     for(i=1;i<=*n;i++){
//         *n%i==0? j++: printf("\n");
//     }
//     j>2? printf("O numero %d não é primo",n): printf("O numero e primo\n");

// }

int main(){
    int limite=0,n=0,i=1;
    printf("Digite o limite da sequencia de numeros primos \n");
    scanf("%d",&limite);

    while(n<=limite){
    n++;
    i++;
    
    n%i==0? printf("%i",n):printf("\n");

    }



    return 0;
}