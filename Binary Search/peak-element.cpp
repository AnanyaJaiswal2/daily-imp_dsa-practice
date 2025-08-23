// Problem: Peak Element
// Approach: Binary Search on mid condition
// Complexity: O(log n), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int peakElement(vector<int> &arr) {
        int n = arr.size();
        if(n == 1) return 0;

        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if((mid==0 || arr[mid]>arr[mid-1]) && (mid==n-1 || arr[mid]>arr[mid+1])){
                return mid;
            }
            else if(mid<n-1 && arr[mid]<arr[mid+1]){
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        return 0;
    }
};
