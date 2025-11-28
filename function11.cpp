// write a function which takes 2 numbers as parameters a and b and return a^2+b^2=2^a^b.

#include<iostream>
using namespace std;

int calculate(int n1,int n2){
    int result = (n1*n1) + (n2*n2) + (2 << (n1 ^ n2));
    return result;
}

int main(){
    int number1, number2;
    cout<<"Enter two numbers: ";
    cin>>number1>>number2;
    int result=calculate(number1,number2);
    cout<<"The result of a^2 + b^2 + 2^a^b is: "<<result<<endl;
    return 0;
}