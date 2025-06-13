// #include<iostream>

// using namespace std;
// int main(){

//     int a = 2;
//     int b = 3;
//     int  *j = &a; 
//     int *d = &b;
//     //printf("%d",j);

//     cout << "Soma de ponteiros";
//     int sum = *j + *d;

//     cout << sum;



//     return 0;
// }

#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    int  n = 0;
    cout << "digite algum numero para fatorial \n";
    
    cin >> n;

    cout << rec(n) << endl;


    return 0;
}

int rec( int n){
    if(n <=1){
        return 1;
    }else{
        return n * rec(n-1);
    }
}
