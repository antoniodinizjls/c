#include<iostream>

using namespace std;

int main(){
    char malha[3][3] = {};
    int i = 0, k = 0, posicao = 0;
    char palpite[1];
    


    cout << "As casas decimais com V- (vazio) \n";
    for(i = 0; i<=2; i++){
        for(k = 0; k<=2; k++){
            //cout << malha[i][k];
            malha[i][k] = 'V';
        }
        //cout << "\n";
    }
    for(i = 0; i<=2; i++){
        for(k = 0; k<=2; k++){
            cout << malha[i][k];
            //malha[i][k] = 'V';
        }
        cout << "\n";
    }

    while(k<=8){
        if(k % 2 == 0){
            cout << "Faça a sua jogada com X, jogador - 1" << endl;
        }else{
            cout << "Faca a sua jogadad com BOLA, jogador - 2"<< endl;
        }
        cin >> palpite ;
        cout << "Digite a posicao que será inserido o objeto \n" <<endl;
        mostrar();
        cin >> posicao;
        if((posicao<=3) && (posicao > 0)){
                if(k % 2 == ){
                    malha[0][posicao] =  'X';
                }else{
                    malha[0][posicao] = 'O'
                }

        } else if((posicao > 3) && (posicao <=6)){
            malha[1][posicao] = (char) palpite;
        }else if((posicao > 6 )  && (posicao <=9)){
            malha[2][posicao]  = (char) palpite;
        }

        k++;
    }







    return 0;
}


void mostrar(){
    int y = 0, cont = 0;
   
    for( y = 1; y<=9;y++){
        cout << y;
        cont++;
        if(cont % 3 == 0){
            cont = 0;
            cout << endl ;        } 
    }
}