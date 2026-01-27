

// Given an integer n, return a string array answer (1-indexed) where:

// answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
// answer[i] == "Fizz" if i is divisible by 3.
// answer[i] == "Buzz" if i is divisible by 5.
// answer[i] == i (as a string) if none of the above conditions are true.
 
// time complexity: O(n)

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int n = 15; // You can change this number

    for (int i = 1; i <= n; i++) {

        if (i % 3 == 0 && i % 5 == 0) {

            printf("FizzBuzz\n");

        } else if (i % 3 == 0) {

            printf("Fizz\n");

        } else if (i % 5 == 0) {

            printf("Buzz\n");

        } else {
            
            printf("%d\n", i);
        }
    }

    return 0;
}