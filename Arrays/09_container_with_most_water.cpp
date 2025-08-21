// Problem: Container With Most Water
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxArea = 0;
        int lo = 0, hi = n - 1;

        while (lo < hi) {
            int height = min(arr[lo], arr[hi]);
            int width = hi - lo;
            int area = height * width;
            maxArea = max(area, maxArea);

            if (arr[lo] < arr[hi]) {
                lo++;
            } else {
                hi--;
            }
        }
        return maxArea;
    }
};
