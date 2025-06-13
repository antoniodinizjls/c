#include<stdlib.h>
#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<string>

int main(){
    
    int vetor[2][3]={{1,2,3} ,{4,5,6}},i=0,j=0;
    
    using namespace std;
    
    setlocale(LC_ALL,"");

    // for(i=0;i<2;i++){
    //     for(j=0;j<3;j++){
    //         cout << vetor[i][j];
    //     }
    // }
    // cout<< vetor[0][4];
    
    // while(i<2){
    //     while(j<3){
    //         std::cout << vetor[i][j]<<"";
    //         j++;
    //     }
    //     i++;
    // }
    while(i<2){
        j=0;
        while(j<3){
            cout <<vetor[i][j];
            j++;
        }
        cout <<"\n"; 
        i++;
    }
    return 0;
}
