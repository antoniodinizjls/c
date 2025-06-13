#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

int main(){
    ofstream archive;
    archive.open("antonio.txt");

    // esvazia o arquivo

    archive<<"";
    archive.close();
    

    return 0;
}