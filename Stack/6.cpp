#include <iostream>
#include <cstdio>
using namespace std;

void primo(int i){

    // int  k = 0, total = 0;
    // for(k = 1 ; i <= k; k++){
    //     if(i % k == 0){
    //         total++;
    //     }

    // }
    // if(total < 2){
    //     cout << "odd \n";
    // }
    // total = 0;
    if( i % 2 == 0){
        cout << "even\n";
    }else{
        cout << "odd\n";
    }


}
// void even(int i){
//     if(i % 2  ==0){
//         cout << "even \n";
//     }
// }
int main() {
    // Complete the code.
    int a, b;
    int i, j;
    cin >> a;
    cin >> b;
    

    
    for (i = a; i<=b;i++){
         if(i == 1){
            cout << "one \n";
         } 
         if(i == 2){
            cout << "two \n";
         }
         if(i == 3){
            cout << "three \n";
         }
         if(i == 4){
            cout << "four \n";
         }
         if(i == 5){
            cout << "five \n";
         }
         if(i == 6){
            cout << "six \n";
         }
         if(i == 7){
            cout << "seven \n";
         }
         if(i == 8){
            cout << "eight \n";
         }
         if(i == 9){
            cout << "nine \n";
         }
         if(i >= 10){
            primo(i);
         }
    }
    return 0;
}