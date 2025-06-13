#include<stdio.h>

int main(){
    int a=0,b=0,i=0;

    printf("Digite valores para A e B (intervalo)\n");
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++){
        
        if(i % 3 == 0 &&  i % 5 ==0 && i!=0){
            printf("%d ",i);
        }    
    }




    return 0;
}