#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    priority_queue<int,vector<int>, greater<int>> minHeap;

    for(int i=0;i<n;i++){

        int x;
        cin>>x;

        if(minHeap.size()<k){
            minHeap.push(x);

        }
        else if(x>minHeap.top()){
            minHeap.pop();
            minHeap.push(x);
        }
    }
}
