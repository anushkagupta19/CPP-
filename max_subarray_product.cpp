// time complexity: O(n)

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubarrayProduct(int *arr, int n) {
    if (n == 0) return 0;

    int maxProduct = arr[0];
    int minProduct = arr[0];
    int result = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < 0) {
            swap(maxProduct, minProduct);
        }
//    int arr[] = {2, 3, -2, 4};

        maxProduct = max(arr[i], maxProduct * arr[i]);
        minProduct = min(arr[i], minProduct * arr[i]);

        result = max(result, maxProduct);
    }
    return result;
}
int main() {
    int arr[] = {2, 3, -2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxProduct = maxSubarrayProduct(arr, n);
    cout << "Maximum subarray product is: " << maxProduct << endl;

    return 0;
}