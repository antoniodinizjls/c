#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>
#include<locale.h>


using namespace  std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int  c,cont=0;
    char conteudo[255];
   // Cursor que irá percorrer cada letra 

    FILE *file;

   // Abre o arquivo no diretório escolhido
    file = fopen("Texto.txt","r");

    // Se o arquivo foi encontrado
    if(file){
        

        // Encontra letras (até o fim do arquivo)
        while((c=getc(file))!=EOF){

            cout<<c;
            conteudo[cont]=c;
            cont++;
        }
        fclose(file);
    }
    for(cont=0;cont < (strlen(conteudo)-1);cont++){
        cout << conteudo[cont];
    }


    return 0;
}