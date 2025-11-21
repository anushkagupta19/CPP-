//          1
//        2 1 2 
//       3 2 1 2 3 
//     4 3 2 1 2 3 4
//   5 4 3 2 1 2 3 4 5

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // Print decreasing numbers
        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        // Print increasing numbers
        for (int l = 2; l <= i; l++) {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}