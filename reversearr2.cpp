//with out any extra spaces
//space complexity=O(1)
// time complexity=O(n)
// two pointer approach

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

    int start=0,end=n-1;

    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;

    }
    printArray(arr,n);
    return 0;
}