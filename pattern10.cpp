//      1
//     212
//    32123
//   4321234
//  543212345

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
    }
    // nums backward
    for(int k=i;k>=1;k--){
        cout<<k;
    }
    // nums forward
    for(int l=2;l<=i;l++){
        cout<<l;
    }
    cout<<endl;
}
    return 0;
}