#include<stdio.h>
#include<iostream>
#include<time.h>

int main(){
    srand(time(NULL));
    printf("%d\n", rand() % 10);

    return 0;
}