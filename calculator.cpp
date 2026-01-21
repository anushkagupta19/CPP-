// calculator using switch statement 

#include<iostream>
using namespace std;

int main(){

int a,b;
char op;

cout<<"enter first number: ";
cin>>a;

cout<<"enter second number: ";
cin>>b;

cout<<"enter operator (+, -, *, /): ";
cin>>op;

switch(op){
    case '+':
        cout<<"addition is: "<<a+b<<endl;
        break;

    case '-':
        cout<<"subtraction is: "<<a-b<<endl;
        break;

    case '*':
        cout<<"multiplication is: "<<a*b<<endl;
        break;

    case '/':
        if(b!=0){
            cout<<"division is: "<<a/b<<endl;
        }else{
            cout<<"Error: Division by zero!"<<endl;
        }
        break;
        
    default:
        cout<<"Invalid operator!"<<endl;
  }
  return 0;
}