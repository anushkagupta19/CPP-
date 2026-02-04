#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0; // The write pointer
        
        for (int n : nums) {
            // If we have less than 2 elements, or the current element 
            // is larger than the element 2 positions back, it's valid.
            if (k < 2 || n > nums[k - 2]) {
                nums[k] = n;
                k++;
            }
        }
        
        return k;
    }
};