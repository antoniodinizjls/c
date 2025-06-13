#include<stdio.h>



int main(){
    int numeros[30],contagem[30];
    int i = 0, n = 0, h = 0, j = 0;
    int maior = 0, menor = 0;
    int aux1 = 0, aux2 = 0;
    //recebendo inputs
    for(n = 0; n <= 29 ; n++){
        printf("Digite um numero \n");
        scanf("%d",&numeros[n]);
    }
    
    //zerando
    for(h = 0; h<=29; h++){
        contagem[h] = 0;
    }

    // contando repetição
    for(i = 0; i<=29 ; i++){
        for(h = 0; h<= 29; h++){
            if(numeros[i]==numeros[h]){
                contagem[i] = contagem[i] + 1;
            }
        }
    }
    //mais repetidos
    for(i = 0; i<=29; i++){
        if(maior < contagem[i]){
            maior = numeros[i];
        }
    }
    // numero que menos se repete
    for(i = 0; i <=29; i++){
        if(menor < contagem[i]){
            menor  = numeros[i];
        }
    }
    // printf("Nusmeros que apareceram duas vezes\n");
    // for(i = 0; i <=29; i++){
    //     if(contagem[i] == 2){
    //         printf("%d\n",numeros[i]);
    //     }
    // }
    //  printf("Numeros que apareceram mais de duas vezes\n");
    // for(i = 0; i <=29; i++){
    //     if(contagem[i] > 2){
    //         printf("%d\n",numeros[i]);
    //     }
    // }

    for(i = 0; i<=29; i++){
        for(j = 0; j<=29; j++){
            if(numeros[i]> numeros[(i+1)]){
                aux1 = numeros[i];
                aux2 = numeros[(i+1)];
                numeros[i] = aux2;
                numeros[(i+1)] = aux1;
                aux1 = contagem[i];
                aux2 = contagem[(i+1)];
                contagem[i] = aux2;
                contagem[(i+1)] = aux1;
            }
        }
    }
    
    for(i = 0; i<=29; i++){
        if(numeros[i] = numeros[(i+1) && contagem[i] == contagem[(i+1)]]){
            contagem[(i+1)] = 0;
        }
    }

    //mostrando lista crescente
    printf("Lista crescente \n");
    for(i = 0; i<=29; i++){
        if(contagem[i]!=0){
            printf("%d\n",numeros[i]);
        }
    }
    printf("Nusmeros que apareceram duas vezes\n");
    for(i = 0; i <=29; i++){
        if(contagem[i] == 2){
            printf("%d\n",numeros[i]);
        }
    }
     printf("Numeros que apareceram mais de duas vezes\n");
    for(i = 0; i <=29; i++){
        if(contagem[i] > 2){
            printf("%d\n",numeros[i]);
        }
    }



    return 0;
}