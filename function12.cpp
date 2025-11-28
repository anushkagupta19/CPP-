// write a function to print the largest of 3 numbers.

#include<iostream>
using namespace std;

int largest_numbers(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else if(b>c){
        return b;
    }else {
        return c;
    }
}

int main(){
    int a,b,c;
    cout<<"enter three numbers: ";
    cin>>a>>b>>c;
    
    int result=largest_numbers(a,b,c);
    
    cout<<"largest is "<<result<<endl;
    return 0;
}

