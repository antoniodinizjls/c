#include<stdio.h>
#include<stdlib.h>

int main(){ 
    int n=0,i=0,escolhido=0,k=0;;
    
    printf("Digite a quantidade de numeros que serão digitados \n");
    scanf("%d",&n);
    
    n<=2 ?printf("Digite a quantidade de numeros novamente"), scanf("%d",&n):printf("\n");

    int *vetor= (int *) malloc(n* sizeof(int)),*qtd = (int *) malloc(n*sizeof(int));
    
    for(i=0;i<n;i++){
        printf("Digite algum número\n");
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<n;i++){
        qtd[i]=0;
    }

    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(vetor[i]==vetor[k]){
                qtd[i]+=1;
            }else{}
        }
    }

    for(i=0;i<n;i++){
        if(qtd[i]>escolhido){
            escolhido=qtd[i];
        }else{}
    }
    
    printf("O valor que mais apareceu na lista foi %i\n",escolhido);

    return 0;
}