//  Accept the parameters and calculate the 
// Compound Interest & print it on STDOUT 
// (Use Math class methods).

#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float principal,rate,time,CI;

    cout<<"Enter principal amount: ";
    cin>>principal;

    cout<<"Enter rate of interest: ";
    cin>>rate;
    
    cout<<"Enter time in years: ";
    cin>>time;

    CI = principal * (pow((1 + rate / 100), time)) - principal;
    cout<<"Compound Interest is: "<<CI<<endl;

    return 0;
}
