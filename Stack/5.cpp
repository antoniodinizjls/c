#include<stdio.h>
#include<iostream>

using namespace std;

void insertion(int vetor[10]){
    int atual, k , u;


    for(u = 1; u < 9; u++){
        atual = vetor[u];
        k = u - 1;
        while( (k >= 0) && (atual < vetor[k])){
            vetor[k+1] = vetor[u];
            k--;
        }
        vetor[u+1] = atual;
    }
    for (u = 0; u<=9;u++){
        printf("%d\n",vetor[u]);
    }


}



int main(){
    int vetor[10] = {};
    int  i = 10;

    while( i>=0){
        vetor[10-i] = i;
        i--;
    }
    
    // for(i = 0; i<=9; i++){
    //     cout << vetor[i] << "\n";
    // }
    insertion(vetor);
    
    for (i = 0; i<=9;i++){
        printf("%d\n",vetor[i]);
    }





    return 0;
}