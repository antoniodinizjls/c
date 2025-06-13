#include<stdio.h>
#include<math.h>

int main(){
    int primo,raiz,i,r=0;
    
    printf("Digite um número para verificar se é primo \n");
    scanf("%i",&primo);

    raiz= sqrt(primo);

    for(i=0;i<raiz;i++){
        if(primo%i==0){
            r++;
        }else{

        }
    }
    if(r!=1){
        printf("O número não é primo\n");
    }else if(r==1){
        printf("O número é primo \n");
    }

    printf("Deu merda");
    return 0;
}