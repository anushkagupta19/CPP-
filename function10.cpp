// write a function to calculate the sum of digit of a number.

#include<iostream>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
    }
    return sum;
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int result=sumOfDigits(number);
    cout<<"The sum of digits of "<<number<<" is "<<result<<"."<<endl;
    return 0;
}