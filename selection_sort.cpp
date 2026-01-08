//time complexity:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionsort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
     swap(arr[i],arr[min_index]);
     }
    print(arr,n);
}

int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionsort(arr,n);
   
    return 0;
}

