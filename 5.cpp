// Find the greatest element and print its index too.
//       {2, 96, 69, 77, 145, 20} = Max element = 145 found at 4 index

#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 96, 69, 77, 145, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    cout << "Max element = " << maxElement << ", found at : " << maxIndex << " index " << endl;

    return 0;
}