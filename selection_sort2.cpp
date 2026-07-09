// Given an array of N integers, write a program to implement the Selection sorting algorithm. Examples 

// Example 1: Input: N = 6, array[] = {13,46,24,52,20,9} 

// Output: 9,13,20,24,46,52 

// Explanation: After sorting the array is: 9, 13, 20, 24, 46, 52 

// Example 2: Input: N=5, array[] = {5,4,3,2,1} 

// Output: 1,2,3,4,5 

// Explanation: After sorting the array is: 1, 2, 3, 4, 5 

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr , int n) {
    // Write your code here
  
  for(int i=0;i<n-1;i++){
    int min_idx=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]< arr[min_idx]){
        min_idx=j;
      }
    }
    swap(arr[i],arr[min_idx]);
  }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        }

    selectionSort(arr,n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}