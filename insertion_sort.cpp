// time complexity: O(n^2)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";//print the array elements
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int curr = arr[i];
        int prev = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev + 1]);
            prev--;   
        }
        arr[prev + 1] = curr;
    }
    // Print the sorted array
    print(arr,n);
}

int main() {
    int arr[] = {2, 117, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    return 0;
}

