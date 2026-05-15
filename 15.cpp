// // self practice

// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// // 123456
// // 123456
// // 123456
// // 123456
// // 123456
// // 123456

// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// // *
// // **
// // ***
// // ****
#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
// // ******
// // *****
// // ****
// // ***
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// // 1
// // 12
// // 123
// // 1234
// // 12345
// #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// // A
// // BC
// // DEF
// // GHIJ
// // KLMNO
// // PQRSTU
//  #include<iostream>
// using namespace std;
// int main(){
//     int n=6;
//     char ch='A';
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// // *****
// // *   *
// // *****

// #include <iostream>
// using namespace std;
// int main() {
//     int n=8;
//     for(int i=1;i<=n;i++){
//         cout<<"*";
//     for(int j=1;j<=n-1;j++){
//         if(i==1 || i==n){
//             cout<<"*";
//         }else{
//             cout<<" ";
//         }
//     }
//    cout<<"*"<<endl;
//     }
// }

// //    *
// //   **
// //  ***
// // ****

// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//         }
//     }
// // 1 
// // 2 3
// // 4 5 6
// // 7 8 9 10
// // 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     int num = 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

