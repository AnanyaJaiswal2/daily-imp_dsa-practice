// Problem: Product of Array Except Self
// Approach: Brute Force (Optimal TODO: Prefix-Suffix Product without division)
// Complexity: O(n^2), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0; i<n; i++) {
            int pro = 1;
            for(int j=0; j<n; j++) {
                if(i == j) continue;
                pro *= nums[j];
            }
            ans.push_back(pro);
        }
        return ans;
    }
};
