// #include <vector>
// #include<iostream>
// using namespace std;

// int findSubarraySum(const vector<int>& array, int i, int j) {
//     int subarraySum = 0;
    
//     // Equivalent to 'for k in range(i, j + 1)'
//     for (int k = i; k <= j; k++) {
//         subarraySum += array[k];
//     }
    
//     return subarraySum;
// }

#include <vector>

void create_prefix_sum(std::vector<int>& arr) {
    // Start from index 1 as the first element remains the same
    for (int i = 1; i < arr.size(); ++i) {
        arr[i] += arr[i - 1];
    }
}