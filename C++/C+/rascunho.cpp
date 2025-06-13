#include<stdio.h>
#define TAM 10

// Quando tiver topo = -1 nãoe existe nada na pilha

void imprimevetor(int pilha[TAM]){
    int i;
    for(i=0;i<TAM;i++){
        printf("%i\n",pilha[i]);
    }

}

void adicionar(int pilha[TAM], int valor,int *topo){
    if(*topo==TAM-1){
        printf("A pilha está cheia\n");
        
    }else{
        topo++;
        pilha[*topo]=valor;
    }
    

}

int main(){
    int pilha [TAM];
    int topo=-1;
    int valor;
    //imprimevetor(pilha);
    printf("Digite algum valor para ser adicionado primeiro\n");
    scanf("%i",&valor);
    adicionar(pilha,valor,&topo);
    imprimevetor(pilha);
    







    return 0;
}