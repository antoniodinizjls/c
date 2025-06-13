#include<stdio.h>
//cálculo de potencia
int pot(int a,int b){
    int lim = b,i = 0,res = 0;
    res = a*a;
    for(i = 0; i<(lim-2);i++){
        res= res*a;
    }
    printf("%d\n",res);
    return 0;
}


int main(){
    int a = 0, b = 0;

    printf("Digite o valor de A e B\n");
    printf("Sendo A(base)e B(O expoente da potencia)\n");
    scanf("%d %d",&a ,&b);
    // pot(2,3);
    pot(a,b);



    return 0;
}
