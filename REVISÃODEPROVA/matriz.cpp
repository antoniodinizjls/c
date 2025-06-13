#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int **vetor = (int **) malloc(2*sizeof(int));
    int  i=0;
    int  j=0;

    vetor[0] = (int *) malloc(2*sizeof(int));
    vetor[1] = (int *) malloc(2 *sizeof(int));

    for(i=0;i<1;i++){
        for(j=0;i<1;j++){
            free(vetor[i][j]);
        }
    }
    for(i=0;i<1;i++){
        for(j=0;i<1;j++){
            vetor[i][j]=1;
        }
    }
    for(i=0;i<1;i++){
        for(j=0;i<1;j++){
            cout << vetor[i][j];
        }
    }






    return 0;
}