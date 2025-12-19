// 52- V - Min Height = 3
// 	*       * 
// 	 *     *  
// 	  *   *   
// 	   * *    
// 	    * 

#include <iostream>
using namespace std;
void printPattern(int n) {
    int spaces = n - 1; // Initial spaces before the first star
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        // Print first star
        cout << "*";
        // Print spaces between stars
        if (i != 1) {
            for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
                cout << " ";
            }
            // Print second star
            cout << "*";
        }
        cout << endl;
        spaces--; // Decrease spaces for next row
    }
}
int main() {
    int n;
    cout << "Enter the height of the pattern (minimum 3): ";
    cin >> n;
    if (n < 3) {
        cout << "Height should be at least 3." << endl;
        return 1;
    }
    printPattern(n);
    return 0;
}