// 1. Print a Single Star (*)

// #include<iostream>
// using namespace std;
// int main(){
//     // cout<<" * "; 
//     for(int i=0;i<1;i++){
//         cout<<" * ";
//     }
// }

// 2. Print Four Stars (****)

// #include<iostream>
// using namespace std;
// int main(){
//     // cout<<" * "; 
//     for(int i=0;i<5;i++){
//         cout<<"*";
//     }
// }

// 4. Print Square of Stars (n x n Stars)

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// 5. Print an Increasing Triangle of Stars.

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<7;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// 6. Print a Right-Aligned Triangle of Stars.

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//     for(int k=1;k<=i;k++){
//            cout<<"*";
//         }   
//         cout<<endl;
//     }
// }

// 7. Print Stars in Even Numbers (2, 4, 6, 8, 10)

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; // We want 5 rows (2, 4, 6, 8, 10 stars)

//     for (int i = 0; i < n; i++) {
//         // Calculate how many stars this row needs
//         int starCount = (i + 1) * 2;

//         for (int j = 0; j < starCount; j++) {
//             cout << "*";
//         }
//         cout << endl; // Move to next line after printing the row
//     }
//     return 0;
// }        

// 8. Print Stars in Odd Numbers (1, 3, 5, 7, 9)
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; 
//     for (int i = 0; i < n; i++) {
//         // Calculate how many stars this row needs
//         int starCount = (i + 1) * 2;
//         for (int j = 1; j < starCount; j++) {
//             cout << "*";
//         }
//         cout << endl; // Move to next line after printing the row
//     }
//     return 0;
// }
// 9. Print a Centered Pyramid of Stars

// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<=i;k++){
//             cout<<"*";
//         }
//        for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// 10. Print Stars and Spaces Alternating 
// (Stars and Blank Spaces)(b = blank space here)
// bbb*
// b*b*b*
// *b*b*b*

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; // Total number of rows
//     for (int i = 0; i < n; i++) {
//         // 1. Print leading spaces ('b')
//         // In the image, 'b' represents a blank space
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << "b"; 
//         }
//         // 2. Print stars and spaces alternating
//         for (int k = 0; k <= i; k++) {
//             cout << "* ";
//         }

//         // 3. Move to the next line
//         cout << endl;
//     }

//     return 0;
// }
// 11. Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345)
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// 12. Print Repeated Numbers per Row (Same Number Repeated)
// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
// floyad triangle 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int nums=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<nums<<" ";
//             nums++;
//         }
//         cout<<endl;
//     }
// }
// 1
// 2 3
// 4 5 6
// 7 8 9 0
// 1 2 3 4 5
// 6 7 8 9 0 1 

// 1
// 0 1 
// 0 1 0 
// 1 0 1 0
// 1 0 1 0 1 
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows

    for (int i = 0; i < n; i++) {
        int start;
        // Step 1: Determine the starting number for the row
        if (i % 2 == 0) start = 1;
        else start = 0;

        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            // Step 2: Flip the number (if it was 1, make it 0; if 0, make it 1)
            start = 1 - start;
        }
        cout << endl;
    }
    return 0;
}
