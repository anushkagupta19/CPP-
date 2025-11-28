// WRITE A function that print all primes in a range from 2to n.

#include<iostream>
using namespace std;

bool isprime(int n){
    if(n==1){
        return false;
     }
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
     }
        return true;
    }
void printprimes(int n){
    for(int i=2;i<=n;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Prime numbers from 2 to "<<number<<" are: ";
    printprimes(number);
    return 0;
}