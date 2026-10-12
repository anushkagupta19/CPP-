#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0; 

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout<<"enter your key: ";
    cin >> key;

    int low = 0;
    int high = n - 1;

    // STEP 1: Run the full binary search loop until pointers cross over
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            cout << arr[mid] << endl; !
            return 0;
        }
        
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // STEP 2: The loop finished without finding an exact match.
    // Now handle the boundary cases out here safely!

    // Case A: The key is smaller than the first element (high crossed below 0)
    if (high < 0) {
        cout << arr[0] << endl;
    }
    // Case B: The key is larger than the last element (low crossed past n-1)
    else if (low >= n) {
        cout << arr[n - 1] << endl;
    }
    // Case C: The key falls between arr[high] and arr[low]
    else {
        int leftdiff = abs(arr[high] - key);
        int rightdiff = abs(arr[low] - key);

        if (leftdiff <= rightdiff) {
            cout << arr[high] << endl;
        } else {
            cout << arr[low] << endl;
        }
    }

    return 0;
}