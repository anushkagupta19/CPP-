//  Break / Continue logic:

// Print numbers from 1 to 100, and stop the loop as soon as a number divisible by
// 17 is encountered.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%17==0){
//             cout<<i<<" ";
//             break;
//         }
//         cout<<i<<" ";   
//     }
//      return 0;
// }

// 2. Print numbers from 1 to 100, but skip all numbers that are divisible by 5 and
// continue printing the rest.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%5 == 0){
//             continue;
//         } 
//         cout<<i<<" ";
//     }
// }
// 3. Take 5 numbers as input, skip any number that is 0 using continue, and
// calculate the sum of the remaining numbers.

// #include <iostream>
// using namespace std;
// int main() {
//     int sum = 0;
//     int number;

//     for (int i = 1; i <= 5; i++) {
//         cin >> number;
//         if (number == 0) {
//             continue; // Jumps back to the top of the loop for the next 'i'
//         }
//         sum += number; 
//     }
//     cout << "The total sum is: " << sum << endl;
//     return 0;
// }

// 4. Search for a specific number in a list of inputs, and terminate the loop immediately
// when the number is found.

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i=1;i<100;i++){
//         if(i==num){
//             continue;
// //         }
// //         cout<<i<<" ";
// //     }
// // }

// // 5. Keep taking numbers from the user and print them until a negative number
// // appears, then stop the loop.
// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Enter numbers (Enter a negative number to stop):" << endl;
//     // We use 'while(true)' to create an infinite loop
//     while (true) {
//         cout << "Enter number: ";
//         cin >> num;
//         if (num < 0) {
//             cout << "Negative number detected. Stopping now..." << endl;
//             break; 
//         }
//         cout << "You entered: " << num << endl;
//     }
//     return 0;
// }
// 6. Skip all odd numbers and print only the even numbers.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<"enter the number : ";
//         cin>>i;

//         if(i%2 !=0){
//         cout<<" odd number stop now "<<endl;
//             continue;
//         }
//         cout<< i<<endl;
//     }
// }

// 7. Continuously add numbers in a loop and stop the loop when the sum becomes
// greater than 100

#include<iostream>
using namespace std;
int main(){

    int num;
    int sum=0;

    while(true){
    cout<< "enter a number : ";
    cin>>num;
        sum=sum+num;
    if(sum>100){
        break;
    }
    cout<<num<<endl;
    }
}

