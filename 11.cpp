// 1. Print the multiplication tables for all numbers from 1 to 10.

#include <iostream>
using namespace std;
int main() {
    // Outer loop: Determines which table we are on (1 to 10)
    for (int i = 1; i <= 10; i++) {
        cout << "Table of " << i << ":" << endl;

        // Inner loop: Multiplies the current table number by 1 through 10
        for (int j = 1; j <= 10; j++) {
            // setw(4) ensures the numbers align in neat columns
            cout << i << " x " << j << " = " << (i * j) << endl;
        }
        
        // Print a line to separate tables for readability
        cout << "------------------" << endl;
    }
    return 0;
}

// 2. Print all possible pairs (i, j) where both i and j range from 1 to n.
#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++){
            cout<<"("<<i<<","<<j<<")"<<endl;
        }
    }
}
// 3. For every number from 1 to n, count and print the total number of its factors.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number (n): ";
    cin >> n;

    // Outer Loop: Pick each number from 1 to n
    for (int i = 1; i <= n; i++) {
        int factorCount = 0;

        // Inner Loop: Check all numbers from 1 to i to see if they are factors
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) { // The % (modulo) operator checks for the remainder
                factorCount++;
            }
        }
        cout << "Number " << i << " has " << factorCount << " factors." << endl;
    }
    return 0;
}
// 4. Print all prime numbers up to n using nested loop checking.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"the factors are: "<<endl;
    for(int i=2;i<=n;i++){
        bool isprime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
        cout<<i<<endl;
        }
    }
    return 0;
}

// 5. Print the Fibonacci pattern row by row, where each row prints the next Fibonacci
// numbers

// 0 1 1 2 3 5 8 13 21 34 

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    long long a = 0; // First Fibonacci number
    long long b = 1; // Second Fibonacci number

    for (int i = 1; i <= n; i++) {
        // Calculate the next Fibonacci number in the sequence
        // (Except for the very first row)
        if (i > 1) {
            long long next = a + b;
            a = b;
            b = next;
        }
        // Inner loop: Print the current Fibonacci number 'i' times
        for (int j = 1; j <= i; j++) {
            if (i == 1) cout << a << " "; 
            else cout << b << " ";
        }
        cout << endl; // Move to the next row
    }
    return 0;
}

// 6. Generate and print a number triangle pattern using nested loops.
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }  cout<<endl;

  }
}

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<i<<" ";
    }  cout<<endl;

  }
}

// floyd's triangle

#include<iostream>
using namespace std;
int main(){
int count = 1;
int n=9;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << count << " ";
        count++; // Keep increasing the total count
    }
    cout << endl;
}
}
// 7. Print a matrix, then calculate and display the sum of each row and the sum of
// each column.
#include <iostream>
#include <vector>
using namespace std;
int main() {
    // 1. Define a 3x3 Matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3;
    int cols = 3;

    // 2. Print Matrix and Calculate Row Sums
    cout << "--- Matrix and Row Sums ---" << endl;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t"; // \t adds a tab space
            rowSum += matrix[i][j];
        }
        cout << "| Row Sum: " << rowSum << endl;
    }

    // 3. Calculate Column Sums
    cout << "---------------------------" << endl;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << colSum << "\t";
    }
    cout << "<- Col Sums" << endl;

    return 0;
}
// 8. Print all Pythagorean triplets whose values are less than or equal to n.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the limit (n): ";
    cin >> n;
    cout << "Pythagorean triplets up to " << n << ":" << endl;
    // Outer loop for 'a'
    for (int a = 1; a <= n; a++) {
        // Middle loop for 'b' (start from 'a' to avoid duplicate sets like 3,4,5 and 4,3,5)
        for (int b = a; b <= n; b++) {
            // Inner loop for 'c'
            for (int c = b; c <= n; c++) {
                // Check the magic formula: a*a + b*b = c*c
                if ((a * a) + (b * b) == (c * c)) {
                    cout << a << ", " << b << ", " << c << endl;
                }
            }
        }
    }
    return 0;
}