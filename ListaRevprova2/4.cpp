#include<stdio.h>
#include<stdlib.h>
// int vetor[60] = {5,-3,0,12,-8,0,7,9,-2,0,13,-5,6,0,-7,11,0,-1,8,0,-12,14,3,-9,0,15,-6,10,0,-4,2,-10,0,17,-13,1,0,-11,4,0,16,-14,0,19,-15,2,0,-16,6,0,18,-17,0,20,-18,3,0,-19,7,0};
int main(){
    int vetor[60];
    int t1 = 0, t2 = 0, t3 = 0,j = 0, i = 0;
    for(int u = 0; u <=59; u++){
       scanf("%d",&vetor[u]);
    }    
    int *positivos =  (int *)calloc(1,sizeof(int));
    int *negativos = (int *)calloc(1,sizeof(int));
   
    for( i  = 0; i<=59; i++){
        if(vetor[i] > 0){
            positivos = (int *) realloc(positivos, ++t1 * sizeof(int));
            positivos[t1 - 1] = vetor[i];

        } else if (vetor[i] < 0) {
            negativos = (int *) realloc(negativos, ++t2 * sizeof(int));
            negativos[t2 - 1] = vetor[i];

        } else {
            t3++;
        }
    }
    int *zeros = (int *)calloc(t3,sizeof(int));  
    i  = 0;
    printf("Numeros positivos\n");
    for(j = 0; j <= (t1 -1); j++){
        printf("%d\n",positivos[j]);
    }
    printf("Numeros negativos\n");
    for(j = 0; j <=(t2-1); j++){
        printf("%d\n",negativos[j]);
    }
    printf("Qtd de zeros\n");
    for(j = 0; j <= (t3-1); j++){
        printf("%d\n",zeros[j]);
    }
    return 0;
}