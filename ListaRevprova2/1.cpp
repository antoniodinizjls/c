#include<stdio.h>
#include<stdlib.h>
// #include<string.h>
#include<conio.h>

int main(){
    int vetor[100];
    int k = 0, i = 0,aux = 0;
    for(k = 0; k<= 99; k++){
        vetor[k] = rand() % 500;
    }
    for(k = 0; k<=99; k++){
        for(i = 0; i <= 99; i++){
            if(vetor[i] > vetor[(i+1)]){
                aux = vetor[i+1];
                vetor[(i+1)] =  vetor[i];
                vetor[i] = aux;
            }
        }
    }

    // for( k = 0; k<=99; k++){
    //     printf("%d\n",vetor[k]);
    // }

    for(i  = 0 ; i<= 99; i++){
        if(vetor[i] == vetor[(i+1)]){
            vetor[(i+1)] = -2;
        }
    }

    for(i = 0; i<= 99; i++){
      if(vetor[i] != -2 && vetor[i] >= 1){
        printf("%d\n",vetor[i]);
      }  
      
        
    }


    return 0;
}