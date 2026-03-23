// // 11. Count and print the total number of digits in a given number.

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     long long n;
// //     int count = 0;
// //     cout << "Enter an integer: ";
// //     cin >> n;

// // // Handle the case where the number is 0
// //     if (n == 0) {
// //         count = 1;
// //     } else {
// //         // If the number is negative, make it positive for counting
// //         if (n < 0){
// //              n = -n;
// //             }

// //         while (n > 0) {
// //             n = n / 10; // Remove the last digit
// //             count++;    // Increment the counter
// //         }
// //     }
// // cout << "Total number of digits: " << count << endl;

// //     return 0;
// // }

// // 12. Reverse the given number and print the reversed value.

// #include<iostream>
// using namespace std;
// int main(){
//     long long int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     while(n>0){
//         int ld=n%10;
//         cout<<ld;
//          n=n/10;
//     }
// }


// // 13. Check whether the given number is a palindrome.

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int n, originalNum, reversedNum = 0, remainder;
// //     cout << "Enter an integer: ";
// //     cin >> n;
// //     originalNum = n; // Store the original value to compare later

// //     // Step 1: Reverse the number
// //     while (n > 0) {
// //         remainder = n % 10;
// //         reversedNum = (reversedNum * 10) + remainder;
// //         n /= 10;
// //     }

// //     // Step 2: Compare reversed number with original
// //     if (originalNum == reversedNum) {
// //         cout << originalNum << " is a palindrome." << endl;
// //     } else {
// //         cout << originalNum << " is not a palindrome." << endl;
// //     }

// //     return 0;
// // }

// // 14. Find and print the sum of digits of the given number.
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=1234;
// //     int sum=0;

// //     while (n>0){
// //       int digit =n%10;
// //       sum=sum+digit;
// //        n=n/10;
// //     }
// //     cout<<sum;
    
// // }
// // 15. Check whether the given number is an Armstrong number.

// // #include <iostream>
// // using namespace std;
// // int main() {

// //     int n, originalNum, remainder, result = 0, nDigits = 0;
// //     cout << "Enter an integer: ";
// //     cin >> n;
// //     originalNum = n;

// //     // Step 1: Count digits
// //     int temp = n;
// //     while (temp != 0) {
// //         temp /= 10;
// //         nDigits++;
// //     }

// //     // Step 2: Calculate sum of powers manually
// //     temp = n;
// //     while (temp != 0) {
// //         remainder = temp % 10;
// //         int p = 1;
// //         for(int i = 0; i < nDigits; i++) {
// //             p *= remainder;
// //         }
        
// //         result += p;
// //         temp /= 10;
// //     }

// //     if (result == originalNum)
// //         cout << originalNum << " is an Armstrong number." << endl;
// //     else
// //         cout << originalNum << " is not an Armstrong number." << endl;

// //     return 0;
// // }

// // 16. Check whether the given number is a Perfect number.

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int n, sum = 0;

// //     cout << "Enter a positive integer: ";
// //     cin >> n;

// //     // Check divisors from 1 up to n/2
// //     // (A divisor cannot be larger than half the number, except for the number itself)
// //     int i = 1;
// //     while (i <= n / 2) {
// //         if (n % i == 0) {
// //             sum += i; // Add the divisor to the sum
// //         }
// //         i++;
// //     }

// //     if (sum == n && n != 0) {
// //         cout << n << " is a Perfect number." << endl;
// //     } else {
// //         cout << n << " is not a Perfect number." << endl;
// //     }

// //     return 0;
// // }
// // 17. Print all prime numbers between 1 and 100.

// // #include <iostream>
// // using namespace std;
// // int main() {
// //     int num = 2; // Start from 2 (the first prime number).

// //     cout << "Prime numbers between 1 and 100 are:" << endl;

// //     while (num <= 100) {
// //         bool isPrime = true;
// //         int divisor = 2;

// //         // Check if 'num' is divisible by any number from 2 up to num/2.
// //         while (divisor <= num / 2) {
// //             if (num % divisor == 0) {
// //                 isPrime = false; // Found a factor, so it's not prime.
// //                 break;           // No need to check further.
// //             }
// //             divisor++;
// //         }

// //         if (isPrime) {
// //             cout << num << " ";
// //         }
// //  num++;
// //     }

// //     cout << endl;
// //     return 0;
// // }

// // 18. Check whether the given number is a prime number.

// // #include <iostream>
// // #include <cmath> // For sqrt()
// // using namespace std;
// // int main() {
// //     int n;
// //     bool isPrime = true;

// //     cout << "Enter a positive integer: ";
// //     cin >> n;

// //     // Handle 0, 1, and negative numbers (not prime)
// //     if (n <= 1) {
// //         isPrime = false;
// //     } else {
// //         int i = 2;
// //         // Check divisors up to square root of n
// //         while (i <= sqrt(n)) {
// //             if (n % i == 0) {
// //                 isPrime = false;
// //                 break; // Found a divisor, stop the loop
// //             }
// //             i++;
// //         }
// //     }

// //     if (isPrime) {
// //         cout << n << " is a prime number." << endl;
// //     } else {
// //         cout << n << " is not a prime number." << endl;
// //     }

// //     return 0;
// // }

// // 19. Print the Fibonacci series up to n terms.

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     int first = 0, second = 1, nextTerm = 0;

//     cout << "Enter the number of terms: ";
//     cin >> n;
//     cout << "Fibonacci Series: ";

//     int i = 1;
//     while (i <= n) {
//         // 1. Handle the first two terms specifically
//         if(i == 1) {
//             cout << first << " ";
//             i++;
//             continue;
//         }
//         if(i == 2) {
//             cout << second << " ";
//             i++;
//             continue;
//         }

//         // 2. Calculate the next term
//         nextTerm = first + second;
//         cout << nextTerm << " ";

//         // 3. Shift values for the next iteration
//         first = second;
//         second = nextTerm;

//         i++;
//     }

//     cout << endl;
//     return 0;
// }

// // 20. Find and print the sum of the Fibonacci  up to n terms.
#include <iostream>
using namespace std;
int main() {
    
    int n;
    long long first = 0, second = 1, nextTerm = 0, sum = 0;

    cout << "Enter the number of terms (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Sum is 0" << endl;
        return 0;
    }

    int i = 1;
    while (i <= n) {
        sum += first; // Add the current term to the total sum
        
        // Calculate the next term in the sequence
        nextTerm = first + second;
        
        // Shift values forward
        first = second;
        second = nextTerm;

        i++;
    }

    cout << "The sum of the first " << n << " Fibonacci terms is: " << sum << std::endl;

    return 0;
}