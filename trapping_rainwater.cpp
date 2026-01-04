// time complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

int trap(int *height, int n){
    int left_max[20000], right_max[20000];

    left_max[0] = height[0];// initialize first element of left_max
    right_max[n - 1] = height[n - 1];// initialize last element of right_max

    for(int i = 1; i < n; i++){
        left_max[i] = max(left_max[i - 1], height[i-1]);// fill left_max array
    }

    for(int i = n - 2; i >= 0; i--){
        right_max[i] = max(right_max[i + 1], height[i + 1]);// fill right_max array
    }

    int water_trapped = 0;

    for(int i = 0; i < n; i++){
        int curr_water = min(left_max[i], right_max[i]) - height[i];// calculate water trapped at index i

        if(curr_water > 0){
            water_trapped += curr_water;// accumulate total water trapped
        }
    }
    cout<<"Total water trapped is: "<<water_trapped<<endl;
    return water_trapped;
}

int main() {
    int height[] = {4,2,0,6,3,2,5};
    int n = sizeof(height) / sizeof(height[0]);

    trap(height, n);
    return 0;
}