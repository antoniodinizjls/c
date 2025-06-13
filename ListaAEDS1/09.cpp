#include <stdio.h>
int main(){
    int qnt = 0;
    for (int i = 100 ; i<=200; i++){
        if(i%4==0){
            qnt++;
        }
    }
    printf ("Existe %d numeros multiplos por 4 entre 100 e 200", qnt);
    return 0;
}