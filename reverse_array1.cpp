#include<iostream>
using namespace std;

void printArray(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}

int main(){
    int arr[]={2,4,0,1,9,6};
    int n=sizeof(arr)/sizeof(int);

    int copyarray[n];

    for(int i=0;i<n;i++){
         int j=n-i-1;
         copyarray[j]=arr[i];
        }
        
    for(int i=0;i<n;i++){
    arr[i]=copyarray[i];
        }

    printArray(arr,n);
    return 0;
}