#include <iostream>
using namespace std;

int main() 
{
  int  i = 0;
  int vetor[4];
  
  for(i = 0; i<=3; i++){
    cout<<"Digite um numero\n";
    cin >> vetor[i];
  }
  
  for(i=3;i>=0;--i){
    cout << vetor[i];
  }
    return 0;
}