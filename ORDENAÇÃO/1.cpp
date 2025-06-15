#include <iostream>
#include<time.h>


int main() {
    int matriz[5] = {1,4,3,5,2}; 
    // int matriz[5] =  {1,2,5,3,4};
    int  i = 0, j = 0, atual = 0;
    int tamanho  = sizeof(matriz)/ sizeof(matriz[0]);
    double inicio = clock();

    for (i = 0; i < tamanho; i++){

        atual = matriz[i]; // seta o elemento
        j = i - 1; //elemento anterior
        while((j >= 0) && atual < matriz[j] ){
         // se elemento j for maior ou igual a zero e o da frente menor que o de tras
         // Inverte
            matriz[i] = matriz[j];
            --j;
        }
        matriz[j + 1]  = atual;

        //primeiro elemento
        //Sendo J o antecessor 
    }
    for(i = 0; i < 5; i++){
        std::cout << matriz[i] << std::endl; 
    }
    //time = time / CLOCKS_PER_SEC;
    double fim =  clock();
    std::cout <<"Tempo gasto na execucao do programa  " << double (fim - inicio)/ CLOCKS_PER_SEC;
    return 0;
}