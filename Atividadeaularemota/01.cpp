#include<stdio.h>



int main(){
    int aux = 0;
    int aux1 = 0;
    int maior = 0;
    int menor = 0;
    int i = 0, j = 0, n = 0;
    int numeros[30];
    int contagem[30];
    int distintos[30];
    int nrepetidos[30];
    
    for(i = 0; i<= 29;i++){
        printf("Digite o numero que deseja salvar no vetor \n");
        scanf("%d",&numeros[i]);
    } 
    //SALVANDO TODOS NÚMEROS

    for(i = 0; i<=29;i++){
        for (j= 0; j<=29; j++){
            if(numeros[i] == numeros[j]){
                contagem[i] = contagem[i] + 1;
            }
        }
    }
    //CONTANDO NÚMEROS
    
    for(i=0; i<=29; i++){
        if(contagem[i]> maior){
            maior = i;
        }
    }
    
    for(i=0 ; i<=29 ; i++){
        if(contagem[i]< menor){
            menor = i;
        }
    }
    //printf("O numero que mais apareceu foi %d e apareceu %d vezes",numeros[maior],contagem[maior]);
    //printf("O numero que menos apareceu foi %d e apareceu %d vezes",numeros[menor],contagem[menor]);
    for(i=0;i<=29; i++){
        for(j= i +1; j<=29;j++){
    
            if (numeros[i]>numeros[j]){
                aux = numeros[i];
                aux1 = numeros[j];
                numeros[i] = aux1;
                numeros[j]= aux;
                aux = 0;
                aux1 = 0;

            }
        }
    }
    // lista ordenada (int numeros[30])
    for( i = 0; i <=29; i++){
        for( j = 0; j <=29 ; j++ )
        {
            if( numeros[i] == nrepetidos[j] )
                break;
        }
        if( j == n )
        {
            nrepetidos[n] = numeros[i];
            n++;
        }
    }
    for(i= 0 ; i<=29 ; i++){
        printf("%d-",nrepetidos[i]);
    }
    
    //printando quantidade de vezes que um número apareceu
    for(i = 0; i<= 29; i++){
        if()
    }




    return 0;
}