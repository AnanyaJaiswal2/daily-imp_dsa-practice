// Problem: Search in Rotated Sorted Array
// Approach: Modified Binary Search
// Complexity: O(log n), O(1)

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(nums[mid] == target) return mid;

            if(nums[lo] <= nums[mid]){ // left sorted
                if(nums[lo] <= target && target <= nums[mid]){
                    hi = mid-1;
                } else {
                    lo = mid+1;
                }
            }
            else{ // right sorted
                if(target >= nums[mid] && target <= nums[hi]){
                    lo = mid+1;
                } else {
                    hi = mid-1;
                }
            }
        }
        return -1;
    }
};
