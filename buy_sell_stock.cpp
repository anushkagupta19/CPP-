// time 

#include <iostream>
#include <climits>
using namespace std;

void maxprofit( int *prices,int n){
    int bestbuy[100000];
    bestbuy[0]=INT_MAX;

    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],prices[i]);
    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int curr_profit=prices[i]-bestbuy[i];
        maxprofit=max(maxprofit,curr_profit);
    }

    cout<<"max profit is: "<<maxprofit<<endl;

}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    maxprofit(prices, n);

    return 0;
}
