// 21. Print the square of each number from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int square =1;
    for(int i=1;i<=100;++i){
        square=i*i;
        cout<<square<<" ";
    }
    return 0;
}
// 22. Print the cube of each number from 1 to n.
#include<iostream>
using namespace std;
int main(){
    int cube=1;
    for(int i=1;i<100;++i){
        cube=i*i*i;
        cout<<cube<<" ";
    }
}
// 23. Print all numbers between a and b that are divisible by 7.
#include<iostream>
using namespace std;
int main(){
    int b=20;
    for(int a=1;a<=b;++a){
          if(a%7==0){
            cout<<a<<endl;
          }
    }
    return 0;
}
// 24. Print all factors of the given number.

#include<iostream>
using namespace std;
int main(){
    int n=24;
    int i=1;
    while(i<=n){
        if(n%i==0){
            cout<<i<<" ";
         
        }
        i++;
    }
    return 0;
}

// 25. Find and print the sum of all factors of the given number.
#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int i=1;
    int n=24;
    cout<<" the sum is :";
    while(i<=n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    cout<<sum<<" ";
    return 0;
}

// 26. Find the HCF (Highest Common Factor) of two given numbers.

#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    // Store original values for the final output
    int a = n1;
    int b = n2;

    while (b != 0) {
        int remainder = a % b;
        a = b;         // Move b to a
        b = remainder; // Move remainder to b
    }
    cout << "The HCF of " << n1 << " and " << n2 << " is: " << a <<endl;
    return 0;
}
// 27. Find the LCM (Least Common Multiple) of two given numbers.

#include <iostream>
using namespace std;
int main() {
    long long n1, n2, a, b;
    cout << "Enter two positive integers: ";
    cin >> n1 >> n2;

    // We store the original values to use in the formula later
    a = n1;
    b = n2;

    // 1. Find the HCF using the Euclidean Algorithm
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    long long hcf = a;
    // 2. Use the formula: LCM = (n1 * n2) / HCF
    // We multiply first, then divide. 
    long long lcm = (n1 * n2) / hcf;

   cout << "The HCF is: " << hcf << endl;
   cout << "The LCM is: " << lcm << endl;

    return 0;
}

// 28. Find the smallest digit in the given number.

#include <iostream>
using namespace std;
int main() {
    int n, smallest = 9; // Initialize with the largest possible digit
    cout << "Enter a positive integer: ";
    cin >> n;
    // Handle the case if the user enters 0
    if (n == 0) {
        smallest = 0;
    }
    // Make n positive if the user enters a negative number
    if (n < 0) n = -n;

    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digit < smallest) {
            smallest = digit; // Update smallest if we find a lower number
        }
        n /= 10; // Remove the last digit
    }

    cout << "The smallest digit is: " << smallest << endl;
    return 0;
}

// 29. Find the largest digit in the given number.

#include <iostream>
using namespace std;
int main() {
    int n, largest = 0; // Initialize with the smallest possible digit
    cout << "Enter a positive integer: ";
    cin >> n;

    // Handle negative numbers by making them positive
    if (n < 0) n = -n;

    // Special case for 0
    if (n == 0) {
        largest = 0;
    }

    while (n > 0) {
        int digit = n % 10; // Get the last digit
        if (digit > largest) {
            largest = digit; // Update if current digit is bigger
        }
        n /= 10; // Remove the last digit
    }
    cout << "The largest digit is: " << largest << endl;
    return 0;
}