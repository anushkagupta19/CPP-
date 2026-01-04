// time complexity: O(n)

#include <iostream>
#include <climits>
using namespace std;

void maxprofit( int *prices, int n){
    int bestbuy[100000]; // assuming maximum size of prices array
    bestbuy[0]=INT_MAX; // initialize first day's best buy price to a very high value

    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],prices[i]);
    }

    int maxprofit=0;

    for(int i=0;i<n;i++){
        int curr_profit=prices[i]-bestbuy[i]; // calculate current profit if sold on day i
        maxprofit=max(maxprofit,curr_profit);// update maximum profit
    }
    cout<<"max profit is: "<<maxprofit<<endl;
}

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    maxprofit(prices, n);
    return 0;
}
