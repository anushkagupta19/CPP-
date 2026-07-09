#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
      cout<<endl;
    }
} 
int pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern4(int n){
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
int pattern5(int n){
    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern6(int n){
     for(int i=0;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern7(int n){
     for(int i=0;i<=n/2;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=2;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   for(int i=n/2-1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<" ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        for(int j=2;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int pattern8(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j=n/2;j<=n-i;j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    // int pattern = pattern1(n);
    int pattern = pattern8(n);

    return 0;
}