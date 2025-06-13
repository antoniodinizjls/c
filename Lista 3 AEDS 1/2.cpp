#include<stdio.h>

int main(){
    int qtd=0,i=0,age=0,primeira=0,segunda=0,terceira=0,quarta=0,quinta=0;
    printf("Digite o numero de idades que você deseja armazenar \n");
    scanf("%i",&qtd);

    while(i<qtd){
        i++;
        printf("Digite a idade da pessoa %i\n",i);
        scanf("%d",&age);

        if(age>=1 && age<=15 ){
            primeira++;
        }else if(age>=16 && age<=30 ){
            segunda++;
        }else if(age>=31 && age<=45){
            terceira++;
        }else if(age>=46  && age<=60){
            quarta++;
        }else if(age>60){
            quinta++;
        }
    }
    printf("Faixa etária \n");
    printf("1 a 15 anos : %i%%\n",primeira=(primeira/qtd)*100);
    printf("16 a 30 anos : %i%%\n",segunda=(segunda/qtd)*100);
    printf("31 a 45 anos : %i%%\n",terceira=(terceira/qtd)*100);
    printf("46 a 60 anos : %i%%\n",quarta=(quarta/qtd)*100);
    printf("Mais de 60 anos : %i%%\n",quinta=(quinta/qtd)*100);


    return 0;
}