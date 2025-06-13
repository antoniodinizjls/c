#include<stdio.h>

int main(){
    float notas[5];
    int i = 0;
    int j = 0;
    float total = 0;

    for(i=0; i <= 4; i++){
        printf("Digite a nota do aluno %i\n",(i+1));
        scanf("%f",&notas[i]);
    }
    for(i=0; i <= 4; i++){
        total += notas[i];
    }

    float media = 0;

    media = total / 5;
    printf("A media de notas e igual a %.2f\n",media);
    for(i=0; i <= 4; i++){
        notas[i] > media ? printf("A nota maior que a media %.2f \n", notas[i]) : NULL;
    }


    return 0;
}