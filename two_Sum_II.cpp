// Two Sum II - Input Array Is Sorted,167
// tc=O(n), sc=O(1)

#include <vector>
#include <iostream>
using namespace std;

    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;

        while(left<right){
            int curr_sum=numbers[left]+numbers[right];

            if(curr_sum==target){
                return {left+1,right+1};
            }
            else if(curr_sum>target){
                right--;

            }else{
                left++;
            }
        }

        return{};
    }