
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void zerando(int matriz[5][5]){
    int k = 0, j = 0;
    for(j = 0; j<=4; j++){
        for(k = 0; k<=4; k++){
            matriz[j][k] = 0;
        }
    }
    printf("Matriz zerada\n");
    for(j = 0; j<=4; j++){
        for(k = 0; k<=4; k++){
            printf("%d",matriz[j][k]);
        }
    }
    printf("\n \n");
    
}
void posicoes(int matriz[5][5]){
    int  u = 0, linha = 0, coluna = 0;
    for(u = 0; u<=2; u++){
        linha = rand() % 4; // gero números de 0 a 100
        coluna = rand() % 4;
        printf("Linha sorteada %d e coluna sorteada %d\n",linha,coluna);
        matriz[linha][coluna] = 1;
        linha = 0;
        coluna = 0;
        //printf("teste\n");
    }
}
void mostrar(int matriz[5][5]){
    int g = 0, h = 0;
    for(g = 0; g <= 4; g++){
        for(h = 0; h<=4 ; h++){
            printf("%d",matriz[g][h]);
        }
        printf("\n");
    }
}
int main(){
    
    srand(time(NULL));
    int matriz[5][5];
    int i = 0,saldo = 0, l = 0;
    int inputlinha = 0,inputcoluna = 0;
    // Zerando matrizes
    zerando(matriz);
    posicoes(matriz);
    
    while(i < 10){
        printf("Digite a linha \n");
        scanf("%d",&inputlinha);
        printf("Digite a coluna\n");
        scanf("%d",&inputcoluna);
        
        if(matriz[inputlinha][inputcoluna]== 1){
            matriz[inputlinha][inputcoluna] = 2;
            saldo++;
            printf("Tesouro encontrado \n");
            mostrar(matriz);
        }else{
            matriz[inputlinha][inputcoluna] = -1;
            printf("Nada aqui \n");
            mostrar(matriz);
        }
        
        if(saldo == 3){
            i = 11;
        }
        i++;   
    }
    mostrar(matriz);
    return 0;
}