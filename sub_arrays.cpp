// 1,12,123,1234,12345
// 2,23,234,2345
// 3,34,345
// 4,45
// 5

// time complexity=O(n^3)

#include<iostream>
using namespace std;

void printsubarray(int n,int *arr){
    for (int start=0;start<n;start++){
        for (int end=start;end<n;end++){
            for (int k=start;k<=end;k++){
                cout<<arr[k];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    printsubarray(n,arr);
    return 0;
}