//

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int searchInRotatedSortedArray(int *arr, int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }

        // Determine which side is properly sorted
        if (arr[left] <= arr[mid]) { // Left side is sorted
            if (target >= arr[left] && target < arr[mid]) {
                right = mid - 1; // Target is in the left side
            } else {
                left = mid + 1; // Target is in the right side
            }
        } else { // Right side is sorted
            if (target > arr[mid] && target <= arr[right]) {
                left = mid + 1; // Target is in the right side
            } else {
                right = mid - 1; // Target is in the left side
            }
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int result = searchInRotatedSortedArray(arr, n, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}