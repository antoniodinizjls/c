#include<stdio.h>


int main(){
    int i = 0, j = 0, aux = 0;
    // int matriz[5][5];
    int matriz[5][5] = {
    {17, 3, 25, 8, 12},
    {1, 19, 6, 14, 4},
    {23, 10, 2, 21, 9},
    {13, 5, 22, 15, 7},
    {24, 18, 11, 20, 16}
    };
    int vetor[25];
    int matriz2[5][5];
    // for(i = 0; i <=4; i++){
    //     for(j = 0; j <= 4; j++){
    //         scanf("%d",matriz[i][j]);
    //     }
    // }

    
    for(i = 0; i<=24; i++){
        for(j = 0; j<=24;j++){
            // if(matriz[i][j] > matriz[i][j+1]){
            //     aux = matriz[i][j+1];
            //     matriz[i][j+1] = matriz[i][j];
            //     matriz[i][j] =  aux;
            // }
        }
    }
    //convertendo matriz para vetor
    int  u = 0;
    for(i = 0; i<=4 ; i++){
        for(j = 0; j<=4 ; j++){
            vetor[u] =  matriz[i][j];
            u++;  

        }
    }
    //ordenando vetor gerado
    for(i = 0; i<=24; i++){
        for(j = 0 ; j<=24; j++){
            if(vetor[i] > vetor[(i+1)]){
                aux = vetor[(i+1)];
                vetor[(i+1)] = vetor[i];
                vetor[i] = aux;                
            }
        }
    }
    //
    for(i = 1; i<=1;i++){
        for(j = 0; j<=4; j++){
            
        }

    }

    printf("Matriz ordenada\n");
    for(i = 0; i <=4; i++){
        for(j = 0; j <= 4; j++){
            printf("%d",matriz[i][j]);
            printf("-");
        }
        printf("\n");
    }


    return 0;
}