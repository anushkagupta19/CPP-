// write a program to find factorial of a number
// time complexity: O(n)


#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int factorial=1;

    for(int i=1;i<=n;i++){
        factorial=factorial*i; 
    }
    cout<<"factorial is :"<<factorial<<endl;
}