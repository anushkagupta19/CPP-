// time complexity: O(n)
// 977 Squares of a Sorted array

#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {

        int n=nums.size();
        vector<int>result(n);

        int i=0;
        int j=n-1;


        int k=n-1;

        while(k>=0){

            int a= nums[i]*nums[i];
            int b= nums[j]*nums[j];

            if(a>b){
                result[k]=a;
                i++;
            }else{
                result[k]=b;
                j--;
            }
            k--;
        }
        return result;
    }

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> result = sortedSquares(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}