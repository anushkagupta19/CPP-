// time complexity: O(n)

#include <iostream>
#include <vector>

using namespace std;

int trap(int *height, int n){
    int left_max[20000], right_max[20000];

    left_max[0] = height[0];
    right_max[n - 1] = height[n - 1];

    for(int i = 1; i < n; i++){
        left_max[i] = max(left_max[i - 1], height[i-1]);
    }
    for(int i = n - 2; i >= 0; i--){
        right_max[i] = max(right_max[i + 1], height[i + 1]);
    }
    int water_trapped = 0;

    for(int i = 0; i < n; i++){
        int curr_water = min(left_max[i], right_max[i]) - height[i];

        if(curr_water > 0){
            water_trapped += curr_water;
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