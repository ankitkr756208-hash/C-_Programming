#include <iostream>
#include <climits>
using namespace std;

void trap(int *heights, int n) {
    int leftMax[2000];
    int rightMax[2000];

    // leftMax
    leftMax[0] = heights[0];
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], heights[i]);
    }

    // rightMax
    rightMax[n - 1] = heights[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i]);
    }

    // calculate water
    int water = 0;
    for (int i = 0; i < n; i++) {
        int level = min(leftMax[i], rightMax[i]);
        water += level - heights[i];
    }

    cout << "Total Water Trapped = " << water << endl;
}

int main() {
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);
    trap(heights, n);
}
