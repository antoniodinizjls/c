#include<iostream>

using namespace std;

int main(){
  int vetor[20] = {15, 8, 23, 5, 12, 30, 2, 18, 9, 27, 6, 20, 1, 14, 25, 7, 19, 3, 22, 10};
  int tamanho = sizeof(vetor) / sizeof(vetor[0]);
  int i = 0, q = 0, atual = 0;
  
  for(i = 0; i < tamanho; i++){
    atual = vetor[i];
    q = i - 1;
    
    while((q>=0) && (vetor[q] > atual)){
      vetor[q+1] = vetor[q];
      q--;
    }
    vetor[q+1] = atual;
  }
  
  for(i = 0; i < tamanho; i++){
    cout << vetor[i] << endl;
  }
  return 0;
}

