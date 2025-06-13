#include<stdio.h>

int main(){
    int vetorp [2][3];
    int vetorm [2][3];
    int resultado [2][3];
    int i = 0;
    int k = 0;
    int j = 0;
    int total = 0;

    for(i=0; i<2; i++){
        for(j=0; j<=2; j++){
            vetorp[i][j] = 1;
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<=2; j++){
            vetorm[i][j] = 1;
        }
    }
    for(i=0; i<2; i++){
        for(j=0; j<=2; j++){
           resultado[i][j] = vetorm[i][j]  + vetorp[i][j];
        }
    }
    //printf("feito");
    // for(i=0; i<2; i++){
    //     for(j=0; j<=2; j++){
    //        total += resultado[i][j];
    //     }
    // }
    // printf("Total %d",total);

    return 0;
}