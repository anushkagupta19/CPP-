// write a function to check if a number is palindrome or not.

#include<iostream>
using namespace std;
bool ispalindrome(int n){
    int original=n;
    int reversed=0;
    while(n>0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    return original==reversed;
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(ispalindrome(number)){
        cout<<number<<" is a palindrome number."<<endl;
    }else{
        cout<<number<<" is not a palindrome number."<<endl;
    }
    return 0;
}