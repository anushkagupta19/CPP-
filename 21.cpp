#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 55;
    int b = 9;

    if(a<0 && b<0){
        cout<<"invalid input";

    }
    else if(a == b){
        cout<<"prices equal";
    }
    else if(a>b){
        cout<<" a is more expensive";
    }
    else{
        cout<<"b is more expensive";
    }
    return 0;
}