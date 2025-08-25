// Problem: Median of Two Sorted Arrays
// Approach: Merge two sorted arrays (Optimal TODO: Binary Search Partitioning)
// Complexity: O(n+m), O(n+m)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int> ans;
        int i=0, j=0;
        while(i<n && j<m){
            if(nums1[i] < nums2[j]) ans.push_back(nums1[i++]);
            else ans.push_back(nums2[j++]);
        }
        while(i<n) ans.push_back(nums1[i++]);
        while(j<m) ans.push_back(nums2[j++]);

        int k = n+m;
        if(k%2) return ans[k/2];
        return (ans[k/2] + ans[k/2 - 1]) / 2.0;
    }
};
