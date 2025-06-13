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
        *topo=*topo+1;
        printf("valor do topo depois do else antes de incrementar %i\n",pilha[*topo]);
        pilha[*topo]=valor;
    }
}
void desempilhar(int pilha[TAM], int *topo){
    printf("valor do topo %i",pilha[*topo]);
    if(*topo==-1){
        printf("Pilha vazia \n");
    }else{
        printf("O valor retirado foi %i\n",pilha[*topo]);
        *topo = *topo-1;
    }
}


int main(){
    int pilha [TAM];
    int topo=-1;
    int valor;
    //imprimevetor(pilha);
    printf("Digite algum valor para ser adicionado primeiro\n");
    scanf("%i",&valor);
    //imprimevetor(pilha);
    adicionar(pilha,valor,&topo);
    valor=5;
    //adicionar(pilha,valor,&topo);
    imprimevetor(pilha);
    desempilhar(pilha,&topo);

    return 0;
}