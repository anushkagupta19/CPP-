// time complexity=O(n^3)

#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

void maxSubarraySum1(int *arr, int n) {
    int maxsum = INT_MIN;

    for (int start = 0; start < n; start++) { // starting point of subarray
        for(int end = start; end < n; end++){// ending point of subarray
            int currentSum = 0;
            for(int i = start; i <= end; i++){// to calculate sum of subarray
                currentSum += arr[i];
            }
            
            cout << currentSum << ",";
            maxsum = max(maxsum, currentSum);// updating maximum sum
        }
    cout << endl;
     }
    cout << "The maximum subarray sum is: " << maxsum << endl;
}

int main() {
    int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(int);
    
    maxSubarraySum1(arr, n);
    return 0;
}