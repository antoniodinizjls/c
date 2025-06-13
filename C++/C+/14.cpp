#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<locale.h>

using namespace std;

void imprimevetor(int *vetor, int tamanho){
    int i;

    for(i=0;i<tamanho;i++){
        cout << vetor[i]<<"\n";

    }


}

int main(){
    setlocale(LC_ALL,"");
    int v[3]={1,2,3};

    imprimevetor(v,3);



    return 0;
}
