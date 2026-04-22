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

#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
    for(int k=1;k<=i;k++){
           cout<<"*";
        }   
        cout<<endl;
    }
}

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
//     int n = 5; // Number of rows

//     for (int i = 0; i < n; i++) {
        // Calculate the odd number of stars for the current row
//         int starCount = (2 * i) + 1;
        
//         for (int j = 0; j < starCount; j++) {
//             cout << "*";
//         }
//         cout << endl; // Jump to next line
//     }
//     return 0;
// }

