// WAP to find the product of two numbers using  function.
#include<iostream>
using namespace std;

int product(int a, int b){
    // compute and return the product of a and b
    return a * b;
}
int main(){
    int p=product(4,5);
    cout<<"the product is "<<p<<endl;
    return 0;
}