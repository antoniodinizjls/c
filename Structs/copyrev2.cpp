// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <fstream>
// #include <string>
// #include <iostream>

// using namespace std;

// int main(){
//     char conteudo[255];
//     int c,cont=0;
//     //cout<<"Ola mundo";

//     FILE *file;

//     //abre o arquivo no diretório escolhido
//     file = fopen("rascunho.txt","r");

//     if(file){
//         cout<<"Não deu erro\n";
        
//         //percorrer o arquivo
//         while((c=getc(file))!= EOF){
//             //EOF= end of file
//             //getc pega todos caracteres de file
//             conteudo[cont] = c;
//             cont++;
//         }
//         fclose(file);
//     }

//     for(cont=0;cont<(strlen(conteudo));cont++){
//         cout << conteudo[cont];

//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
    char conteudo[255];
    int c,cont=0;
    //cout<<"Ola mundo";

    FILE *file;

    //abre o arquivo no diretório escolhido
    file = fopen("rascunho.txt","r");
    // verificar se o arquivo foi encontrado

    if(file){
        cout<<"Não deu erro\n";
        
        //percorrer o arquivo
        while((c=getc(file))!= EOF){
            //EOF= end of file
            //getc pega todos caracteres de file
            conteudo[cont] = c;
            cont++;
        }
        fclose(file);
    }
    
    
    for(cont=0;cont<(strlen(conteudo));cont++){
        cout << conteudo[cont];

    }

    return 0;
}