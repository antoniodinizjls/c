#include<stdio.h>
#include<stdlib.h>


int main(){
    // int v1[15], v2[15];
    int v1[15] = {5, 12, -3, 8, 0, 19, -7, 4, 22, 13, 9, -1, 6, 14, 3};
    int v2[15] = {3, 12, 7, 5, -3, 18, 0, 22, 11, 8, 2, 14, -6, 9, 17};
    int i  = 0, k = 0, t1 = 1;
    int *v3 = (int *) calloc(t1,sizeof(int));
    for(i = 0; i<=14; i++){
        scanf("%d",&v1[i]);
    }
    for(i = 0; i<=14; i++){
        scanf("%d",&v2[i]);
    }

    for(i = 0; i<=14; i++){
        for(k = 0; k<=14;k++){
            if(v1[i] == v2[k]){
                v3 = (int *) realloc(v3, ++t1 * sizeof(int));
                v3[(t1-1)] = v1[i];
            }
        }
    }
    printf("Numeros repetidos\n");
    for(i = 0; i <= (t1 - 1);i++){
        printf("%d",v3[i]);
    }

    return 0;
}