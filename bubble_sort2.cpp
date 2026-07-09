#include<iostream>
using namespace std;

// void bubble_sort( int arr[],int n ){

//     for(int i=0 ; i<n-1; i++){
//        for(int j=0 ; j<n-i-1 ; j++){

//         if(arr[j] > arr[j+1]){

//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//           }
//        }
//     }
// }

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];       // card we are inserting
        int j = i - 1;

        // shift bigger elements one step right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;       // place the card
    }
}

int main(){
    int arr[]={5,2,9,1,5,6};
    int n=6;

    // bubble_sort(arr,n);
    insertionSort(arr, n);


    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}