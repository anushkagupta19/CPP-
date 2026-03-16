// // 1.print all numbers from 1 to 10 using a loop.

// #include <iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for (int i=1;i<n;i++){
//        cout<<i<<endl;
//     }
//     return 0;
// }

// //2. Print numbers from 10 down to 1 in reverse order.

// #include <iostream>
// using namespace std;
// int main() {
//     // Start at 10, continue as long as i >= 1, decrement i each time
//     for (int i = 10; i >= 1; --i) {
//         cout << i <<endl;
//     }
//     return 0;
// }

//3. Print all even numbers between 1 and 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//          if(i%2==0){
//             cout<<i<<endl;
//          }
//     }
//     return 0;
// }


// 4. Print all odd numbers between 1 and 100.
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//          if(i%2!=0){
//             cout<<i<<endl;
//          }
//     }
//     return 0;
// }

// 5. Print the multiplication table of a given number from n × 1 to n × 10.

// #include<iostream>
// using namespace std;
// int main(){
//     int table_num;
//      cin>>table_num;
//     for(int i=1;i<=10;++i){
//          int table=table_num*i;
//          cout<<table_num <<"* "<<i <<" = "<<table<<endl;
//     }
//     return 0;

// }


// 6. Calculate and print the sum of the first n natural numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;
//     for(int i=1;i<=n;++i){
//         sum = sum+i;
//     }
//     cout<<sum;
// return 0;
// }


// 7. Calculate the sum of all even numbers from 1 up to n.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;
//     for(int i=1;i<=n;++i){
//         if(i%2==0){
//         sum = sum+i;
//         }
//     }
//     cout<<sum;
// return 0;
// }


// // 8. Calculate the sum of all odd numbers from 1 up to n.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;
//     for(int i=1;i<=n;++i){
//         if(i%2!=0){
//         sum = sum+i;
//         }
//     }
//     cout<<sum;
// return 0;
// }


// 9. Calculate and print the factorial of a given number.

#include <iostream>
using namespace std;
int main() {
    int n;
    long long factorial = 1; // Start at 1, not 0!

    cout << "Enter a positive integer: ";
    cin >> n;

   
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " = " << factorial << std::endl;
    

    return 0;
}


// 10. Find and print the product of all digits of a given number

// #include<iostream>
// using namespace std;
// int main(){
//     int n=1324;
//     int prod=1;
//        while(n>0){
//         int digit=n%10;
//         prod=prod*digit;
//         n=n/10;
//     }
//        cout<<prod;

//     return 0;
// }