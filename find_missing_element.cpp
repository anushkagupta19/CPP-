#include<iostream>
using namespace std;

int findMissingElement(int a[],int n){

    int N =n+1;
    int totalSum = (N*(N+1))/2;

    int arrSum =0;
    
    for(int i=0;i<n;i++){
        arrSum += a[i];
    }
    
    return totalSum - arrSum;
}
int main(){
    int a[]={1,2,3,5};
    int n=sizeof(a)/sizeof(int);

    cout<<"Missing element is: "<<findMissingElement(a,n)<<endl;
    return 0;
}