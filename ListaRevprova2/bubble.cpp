// #include<stdio.h>

// int main(){
//     int vetor[3]  = {2,3,1};
//     int k = 0,  i = 0, aux = 0;
//     for(i = 0; i<=2; i++){
//         for( k = 0; k <=2 ; k++){
//             if(vetor[k] > vetor[(k+1)]){
//                 aux = vetor[(k+1)];
//                 vetor[(k+1)] = vetor[k];
//                 vetor[k] = aux;
//             }
//             aux = 0;
//         }
//     }
//     // i = 0;
//     // while( i <= 3){
//     //     printf("%d\n",vetor[i]);
//     //     i++;
//     // }
//     for( i = 0; i<=2; i++){
//         printf("%d",vetor[i]);
//     }
//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *multiplo = (int *) malloc( 1 * sizeof(int));
    int  i = 0;
    // free(multiplo); libera a memoria alocada
    int tamanho = sizeof(multiplo) / sizeof(int);
    // for(int i = 0; i < (tamanho); i++){
    //     multiplo[i] = i;
    // }
    // for(int k = 0; k < (tamanho); k++){
    //     printf("%d\n",multiplo[k]);
    // }

    multiplo =  (int *) realloc(multiplo,(tamanho+1));

    for(i = 0; i<=1; i++){
        
        multiplo[i] = i;
        printf("%d\n",multiplo[i]);
    }


    return 0;
}
