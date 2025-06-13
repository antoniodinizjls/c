#include<iostream>


using namespace std;

int main() {
    string user,senha;
    cout<<"Digite o número do usuário\n";
    cin>>user;
    cout<<"Digite a senha do usuário";
    cin>>senha;
    if(user=="675483"&&senha=="67453"){
        cout<<"Usuário válido\n";
        return 0;
    }
    if(user=="145627"&&senha=="89234"){
        cout<<"Usuário válido\n";
        return 0; 
    }
    if(user=="98782"&&senha=="89132"){
        cout<<"Usuário válido\n";
        return 0;
    }else{
        cout<<"Usuário inválido";
    }
    
    
    
    return 0;
}