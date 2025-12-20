// time complexity=O(n^2)

#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;
void maxSubarraySum2(int *arr, int n) {
    int maxsum = INT_MIN;

    for (int start = 0; start < n; start++) { // starting point of subarray
        int currentSum = 0;
        for(int end = start; end < n; end++){// ending point of subarray
            currentSum += arr[end]; // incrementally add to current sum
            // cout << currentSum << ",";
            maxsum = max(maxsum, currentSum);// updating maximum sum
        }
        // cout << endl;
    }
    cout << "The maximum subarray sum is: " << maxsum << endl;
}
int main() {
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(int);
    
    maxSubarraySum2(arr, n);
    return 0;
}