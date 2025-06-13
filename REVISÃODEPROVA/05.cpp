#include<stdio.h>

int main(){
    int num=0;
    int i=1;


    printf("Digite o numero que vc quer a tabuada\n");
    scanf("%d", &num);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,int(i*num));
    }



    return 0;
}