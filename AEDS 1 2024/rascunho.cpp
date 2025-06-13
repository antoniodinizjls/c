// #include<stdio.h>
// #include<iostream>
// #include<stdlib.h>
// #include<string.h>


// int main(){
//     int i  = 0, resultado = 0, maior = 0;
//     // char myStr1[] = "ABCD";
//     // char myStr2[] = "ABCE";
//     // int resultado = strcmp(myStr1,myStr2);
//     char palavra[4][100];
//     char ordem[4][100];
//     for(i = 0; i <= 4; i++){
//         setbuf(stdin, NULL);
//         printf("Digite um nome \n");
//         fgets(palavra[i],sizeof(palavra[0]),stdin);
//     }

//     // while( i < 4){
//     //     resultado = strcmp(palavra[i],palavra[(i+1)]);
//     //     if(resultado < 0){
//     //         printf("%s é anterior a %s",palavra[i],palavra[(i+1)]);
//     //     } 
//     //     ++i;
//     // }
    
//     for(i = 0; i < 5; i++){
//         resultado = strcmp(palavra[maior], palavra[i+1]);
//         if(resultado < 0){
//             maior = i;
//             ordem[i] = palavra[maior];
//         }else{
//             maior = i+1;
//         }
//     }
//     printf("Ordem alfabetica \n");
//     for(i = 0; i < 5; i++){
//         printf("%s\n",palavra[i]);
//     }
    

//     return 0;
// }

#include<stdio.h>
#include<string.h>

int main(){
    int a = 0, i = 0;
    char palavra[2][100];
    while (a < 2){
        
        printf("Digite uma palavra\n");
        setbuf(stdin, NULL);
        fgets(palavra[a],sizeof(palavra[0]),stdin);

        ++a;
    }
    
    // for( i = 0; i < 1; i++){
    //     for(a = 0; palavra[1][a] != '\0'; a++){
    //         if(palavra[i][a] == palavra[(i+1)][a]){
    //             printf("Letras iguais %c, %c\n",palavra[i][a],palavra[(i+1)][a]);
    //         }
    //     }
    // }
    int tamanho =  strlen(palavra[1]); // para burlar o problema de iterar mais uma vez no final
    for(a = 0; a  < (tamanho-1); ++a){
            printf("%d",a);
            if(palavra[i][a] == palavra[(1)][a]){
                printf("Letras iguais %c, %c\n",palavra[i][a],palavra[(1)][a]);
            }
            //printf("%d",a);
        }




    return 0;
}