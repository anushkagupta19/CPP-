#include<iostream>
using namespace std;

void sayhello(){
    cout<<"Hello, World! ";
}

void assistant(){
    sayhello();
    cout<<"This is a simple C++ program.";
}

int main(){
    assistant();
    return 0;
}