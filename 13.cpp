// Find and print the sum of the first n natural numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=100;i++){
//         sum=sum+i;
//     }
//     cout<<sum;

// }
// 2. Find and print the sum of the first n even numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     cout<<sum;
// }
// 3. Find and print the sum of the first n odd numbers.
// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             sum=sum+i;
//         }
//     }
//     cout<<sum;
// }
// 4. Print the first n terms of an arithmetic progression for the given first term and
// common difference.
// #include<iostream>
// using namespace std;
// int main(){
//     int a=11;
//     int d=7;
//     int n=100;

//     int current_term=a;

//     for(int i=1;i<n;i++){
//         cout<<current_term<<endl;

//         current_term=current_term+d;
//     }
//     // cout<<current_term<<endl;
// }
// 5. Print the first n terms of a geometric progression for the given first term and
// common ratio.
// #include<iostream>
// using namespace std;
// int main(){
//     double a=3;
//     double r=4;
//     int n=10;

//     double current_term=a;

//     for(int i=1;i<n;i++){
//         cout<<current_term<<endl;

//         current_term=current_term * r;
//     }
// }
// 6. Print the Fibonacci series up to the required number of terms.
// #include<iostream>
// using namespace std;
// int main(){
//    int n=10;
//    int a=0;
//    int b=1;

//    for(int i=0;i<=n;i++){
//     cout<<a<<",";
//     int c=a+b;
//     a=b;
//     b=c;
//    }
// }
// 7. Find and print the sum of the Fibonacci series up to the required number of terms.
// #include<iostream>
// using namespace std;
// int main(){
// int n=10;
// int a=0;
// int b=1;
// int sum=0;

// for(int i=0;i<=n;i++){
//     cout<<a<<endl;
//     sum=sum+a;
//     int c=a+b;
//     a=b;
//     b=c;
// }
// cout<<"sum is : "<< sum;
// }
// 8. Calculate and print the value of the series
// 1² + 2² + 3² + … + n².
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;

//     for(int i=0;i<=n;i++){
//         int sq=i*i;
//         cout<<sq<<endl;

//         sum=sum+sq;
//     }
//     cout<<"sum is: "<< sum;
//}
// 9. Calculate and print the value of the series
// 1³ + 2³ + 3³ + … + n³.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int sum=0;

//     for(int i=0;i<=n;i++){
//         int cube=i*i*i;
//         cout<<cube<<endl;

//         sum=sum+cube;
//     }
//     cout<<"sum is: "<< sum;
// }
// 10. Calculate and print the value of the series
// 1 + 1/2 + 1/3 + … + 1/n.
// Harmonic Series.
// #include<iostream>
// #include <iomanip> // For setting decimal precision
// using namespace std;
// int main(){
//     int n=10;
//     double sum=0.0;
//     for(int i=1;i<=n;i++){
//        sum = sum + (1.0 / i);
//     }
//     cout << fixed << setprecision(4);
//     cout << "The sum of the series is: " << sum << endl;

//     return 0;
// }
// 11. Print the series of powers of two:
// 1 + 2 + 4 + 8 + … + 2ⁿ.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for(int i=1;i<=n;i++){
//         int result=2*i;
//         cout<<result<<" ";
//     }
// }
// 12. Calculate and print the value of the series
// 1! + 2! + 3! + … + n!.
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     int result=1;
//     for(int i=n;i>=1;i--){
//         result = i * result;

//     }
//     cout<<result;

// }
// 13. Calculate and print the value of the series
// 1 + x + x² + x³ + … + xⁿ
// #include<iostream>
// using namespace std;
// int main(){
//     int n=3;
//     int sum=0;
//     int result=1;
//     for(int i=1;i<=n;i++){
//         result=i*i;
//         sum=sum+result;

//     }
//     cout<<sum;
// }
// Calculate and print the value of the series
// x − x²/2! + x³/3!-x^4/4!+....
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x;
    int n;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    double sum = 0;
    double term = x; // The first term is x
    
    for (int i = 1; i <= n; i++) {
        sum += term; // Add the current term to the total

        // Prepare the NEXT term:
        // 1. Multiply by x
        // 2. Divide by (i + 1) to build the factorial
        // 3. Multiply by -1 to flip the sign
        term = -term * x / (i + 1);
    }

    cout << fixed << setprecision(6);
    cout << "The sum of the series is: " << sum << endl;

    return 0;
}