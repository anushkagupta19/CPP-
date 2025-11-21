#include<iostream>
using namespace std;

int sum(int a,int b=1){
    
    int sum=a+b;
    return sum;

}
int main(){

    int s=sum(3);
    cout<<"the sum is "<<s<<endl;
    return 0;

}