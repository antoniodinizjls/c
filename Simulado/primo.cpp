#include<stdio.h>

int main(){
    int lim=0, i=0,j=2;
    int cont=0;
    printf("Digite o limite para ser procurado numeros primos \n");
    scanf("%i",&lim);

    while(i<lim){
        while(j<=i){
           if(i % j ==0){
                cont++;
                //continue;          
           }
           j++;
        }
        cont==2 ? printf("E primo %d\n",i): NULL;
        //cont=0;
        //printf("e primo %d\n",i);
        i++;
    }

    return 0;
}