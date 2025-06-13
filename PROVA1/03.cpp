#include<stdio.h>
#include<stdlib.h>

int main(){
    int maior=0;
    int menor=0;;
    int media=0;
    int i=0;
    int input=0;

    do{
        printf("Digite algum número \n");
        scanf("%d",&input);

        if(input==0){
            break;;
        }

        i++;
        media= media+input;
        if(i>maior){
            maior =i;
        }
        if(i<menor){
            menor=i;
        }


    }while(true);


    media = media/i;
    printf("A media e igual: %i\n",media);
    printf("O maior e %i\n",maior);
    printf("O menor e %i\n",menor);

    return 0;
}