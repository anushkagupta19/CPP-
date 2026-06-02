// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     for(int i=1;i<10;i++){
//         for(int j=1;j<n-i;j++){
//         cout<<" ";
//         }
//         for(int k=1;k<i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         int sq= (i+1) *2;
//         for(int j=0;j<sq;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; 
//     for (int i = 0; i < n; i++) {
//         int starCount = (i + 1) * 2;
//         for (int j = 1; j < starCount; j++) {
//             cout << "*";
//         }
//         cout << endl; 
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             cout<<" ";
//         }
//         for(int k=0;k<i;k++){
//             cout<<"*";
//         }
//         for(int l=1;l<i;l++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=6;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     int num=1;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<i;j++){
//             cout<<num<<" ";
//             num=num+1;
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

// #include<iostream>
// using namespace std;
// int main(){
//     int n=7;
//     int val=1;
//     for(int i=1;i<n;i++){
//         for(int j=1;j<i;j++){
//             cout<< val%10 <<" ";
//             val++;
//         }
//         cout<<endl;
//     }
// }

// 1
// 0 1 
// 0 1 0 
// 1 0 1 0
// 1 0 1 0 1 

// #include <iostream>
// using namespace std;
// int main() {
//     int n = 5; 
//     for (int i = 0; i < n; i++) {
    
//         int start;
//         if (i % 2 == 0) start = 1;
//         else start = 0;

//         for (int j = 0; j <= i; j++) {
//             cout << start << " ";
//             start = 1 - start;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int n=5;
//     char ch = 65;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

// A
// BC
// DEF
// GHIJ
// KLMNO

#include<iostream>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    int num=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(ch+num)<<" ";
            num++;
        }
        cout<<endl;
    }
}
