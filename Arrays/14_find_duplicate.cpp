// Problem: Find the Duplicate Number
// Approaches:
// 1. Brute: Sort the array and check adjacent elements -> O(n log n), O(1)
// 2. Better: Use Hashmap (unordered_map) -> O(n), O(n)
// 3. Optimal: Floyd’s Cycle Detection (Tortoise & Hare) -> O(n), O(1) [To be studied]
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        // ---------- Brute (Sorting) ----------
        /*
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                return nums[i];
            }
        }
        return -1;
        */

        // ---------- Better (Hashmap) ----------
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > 1) {
                return nums[i];
            }
        }
        return -1;
    }
};
