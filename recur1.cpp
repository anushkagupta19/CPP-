// #include <iostream>
// using namespace std; 

// // int sum_n_terms(int n) {
// //     // Base case: When n reaches 0, the sum is 0
// //     if (n == 0) {
// //         return 0;
// //     } 
// //     // Recursive case: Add n to the sum of the previous (n-1) terms
// //     return n + sum_n_terms(n - 1);
// // }
// // int fact(int n){
// //     if(n==0) return 1;
// //     if(n==1) return 1;
// //     return n* fact(n-1);}
 
// void name(int i,int n){
    if(i>n) {
        return;
    }
    cout<<"raj"<<endl;
    name(i+1,n);
}

int main() {
    int n = 1;
    // cout << name(n) << endl;
    name(1,n);
}