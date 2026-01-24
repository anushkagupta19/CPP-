// WAP to print if a number is prime or not.

#include<iostream>
using namespace std;

bool iseven(int n){

if(n%2==0){

   return true;
}else{

    return false;
   }
}

int main(){

    cout<<iseven(6)<<endl;
    
    return 0;
}