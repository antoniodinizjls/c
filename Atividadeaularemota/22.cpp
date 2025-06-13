#include<stdio.h>

int main(){
    int numeros[30][2];
    int i = 0, j = 0,aux = 0,aux1 = 0;

    for(i = 0; i<=29; i++){
        numeros[i][0] = 0;
        numeros[i][1]  = 0;
    }


    for(i = 0 ;i<=20;i++){
        printf("Digite um numero:\n");
        scanf("%d",&numeros[i][0]);
    }

    for(i = 0; i<=29;i++){
        for(j = 0; j<=29; j++){
            if(numeros[0][i]==numeros[0][j]){
                numeros[0][i]++;
            }
        }
    }
    //Bubble sort
    for(i = 0; i<=29;i++){
        for(j = 0; j<=29; j++){
            if(numeros[i][0]>numeros[(i+1)][0]){
                aux = numeros[i][0]; 
                aux1 = numeros[(i+1)][0];
                numeros[i][0] = aux1;
                numeros[(i+1)][0] = aux;
            }
        }
    }
    //frequencia
    for(i = 0; i<=29;i++){
        if(numeros[i][0] == numeros[(i+1)][0]){
            numeros[(i+1)][1] = 0 ;
        }
    }

    printf("Lista crescente \n");
    for(i = 0; i<=29; i++){
        if(numeros[i][1]!= 0 && numeros[i][0] >=0){
            printf("%d\n",numeros[i][0]);
        }
    }







    return 0;
}