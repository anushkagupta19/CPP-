// time complexity=O(n)

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void kadanesAlgorithm(int *arr, int n) {
    int maxsum = INT_MIN; // initialize maximum sum to the smallest integer
    int currentsum = 0; // initialize current sum to 0

    for(int i = 0; i < n; i++) {
        currentsum += arr[i]; // add current element to current sum

        maxsum = max(maxsum, currentsum); // update maximum sum
        if (currentsum < 0) {
            currentsum = 0; // reset current sum if it becomes negative
        }
    }
    cout << "The maximum subarray sum is: " << maxsum << endl;
}
int main() {
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(int);
    
    kadanesAlgorithm(arr, n);
    return 0;
}