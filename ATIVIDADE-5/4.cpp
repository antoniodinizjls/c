#include<stdio.h>
// Verificador se um numero é primo
int ehprimo(int a){
    int i = 0, j =0;

    for(i = 2; i < a; i++){
        if(a % i == 0){
            j++;
        }
    }
    if(j > 1){
        return 1;
    }else{
        return 0;
    }

    return 0;
}


int main(){
    int a = 0, k = 0;
    while( k < 1){
        printf("Digite um numero que voce deseja saber se e primo\n");
        scanf("%d",&a);
        if( a >= 0){
            printf("%d",ehprimo(a));
            k++;
        }
    }
    return 0;
}