#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int left = 0;
    for(int right = 0; right < nums.size(); right++){
        if(nums[right] != 0) {
            swap(nums[left],nums[right]);
            left++;
        }
    }
}


int main() {
    vector<int> nums = {0, 1, 0, 3, 0,9,0 , 0,12};
    moveZeroes(nums);
    
    for(int num : nums) {
        cout << num << " ";
    } 
    return 0;
}
