#include<stdio.h>
#include<iostream>

using namespace std;


int main(){
    int i = 0, k = 0, total = 0;
    cout << "digite um numero \n";
    cin >> i;

    for(k = 1 ; i<= k; k++){
        if(i % k == 0){
            total++;
        }

    }
    if(total > 2){
        cout << "n e primo \n";
    }else{
        cout << "e primo \n";
    }




    return 0;
}