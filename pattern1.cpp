// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

int main(){
    
int n;
cout<<"Enter number of rows: ";
cin>>n;
for(int i=1;i<=n;i++){
int val=i;
    for(int j=1;j<=n;j++){
        cout<<val<<" ";
    }
      cout<<endl;
    }
}