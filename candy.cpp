#include <vector>
using namespace std;

// approach 1: Using two arrays to store the count of candies for left to right and right to left passes, and then taking the maximum of both for each child.
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        
        vector<int> L2R(n, 1);
        vector<int> R2L(n, 1);
        
        //First comparing with only left neighbour
        for(int i = 1; i<n; i++) {
            if(ratings[i] > ratings[i-1])
                L2R[i] = max(L2R[i], L2R[i-1]+1);
        }
        
        //Then comparing with only right neighbour
        for(int i = n-2; i>=0; i--) {
            if(ratings[i] > ratings[i+1])
                R2L[i] = max(R2L[i], R2L[i+1]+1);
        }
        
        
        int result = 0;
        for(int i = 0; i<n; i++) {
            result += max(L2R[i], R2L[i]);
        }
        
        return result;
    }
};

// Approach 2: Using only one array to store the count of candies, and updating it in both left to right and right to left passes.
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> count(n, 1);
        
        //First comparing with only left neighbour
        for(int i = 1; i<n; i++) {
            if(ratings[i] > ratings[i-1])
                count[i] = max(count[i], count[i-1]+1);
        }
        
        //Then comparing with only right neighbour
        for(int i = n-2; i>=0; i--) {
            if(ratings[i] > ratings[i+1])
                count[i] = max(count[i], count[i+1]+1);
        }
        
        
        return accumulate(begin(count), end(count), 0);
    }
};