// Bubble Sort Implementation in C++
// time complexity: O(n^2)


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubblesort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr,n);
}

int main(){
    int arr[]={2,3,6,1,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    return 0;
}