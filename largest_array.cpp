#include<iostream>
using namespace std;

int main(){

    int arr[]={5,4,3,9,12};
    int n=sizeof(arr)/sizeof(int);

    int max=arr[0];
    int min=arr[0];
//travese the array
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"the largest element is: "<<max<<endl;
    cout<<"the smallest element is: "<<min<<endl;
    return 0;
}