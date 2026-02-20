#include <vector>
#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // We use an unordered_set to store unique elements we've seen so far
        unordered_set<int> seen;
        
        for (int x : nums) {

            // If the element is already in the set, we found a duplicate
            if (seen.find(x) != seen.end()) {
                return true;
            }

            // Otherwise, add the element to the set
            seen.insert(x);
        }

        // If we finish the loop, all elements are distinct
        return false;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};
    
    if (solution.containsDuplicate(nums)) {

        cout << "Contains duplicate" << endl;
    } else {
        
        cout << "No duplicates" << endl;
    }
    
    return 0;
}