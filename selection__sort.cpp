#include<iostream>
#include<vector>

using namespace std;

void printArray( const vector<int>& arr){
    for(int num : arr){
        cout<< num << " ";
    }
    cout<<endl;
}

void selectionSort( vector<int>& arr){
    int n= arr.size();

    for(int i=0;i<n-1;i++){
        int minIdx = i;

        for(int j=i+1 ; j<n ;j++){
            if( arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }
    
    if( minIdx != i){
        swap( arr[i] , arr[minIdx]);
    }
  }
}
int main(){

    vector<int>arr = { 64,25,12,22,11 };

    cout<<" original array: ";
    printArray(arr);

    selectionSort(arr);

    cout<<" sorted array: ";
    printArray(arr);

    return 0;


}