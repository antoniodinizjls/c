#include<stdio.h>
#include<stdlib.h>

int main(){
    int n=0,i=0,j=0;
    printf("Digite a quantidade de sequencia de numeros \n");
    scanf("%d",&n);
    int *vetor =  (int *) malloc(n* sizeof(int));
    for(i=1;i<=n;i++){
        printf("Digite o %d elemento da sequencia\n",i);
        scanf("%d",&vetor[i]);
    }
    for(i=1;i<n;i++){
        if(vetor[i]==vetor[i+1] || vetor[i]>vetor[i+1]){
            //printf("A lista nao esta em ordem crescente \n");
            j++;
        }
    }
    j==0? printf("A lista e uma sequencia\n"):printf("Realmente nao e uma sequencia \n");
    return 0;
}