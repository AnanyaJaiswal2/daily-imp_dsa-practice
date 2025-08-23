// Problem: Single Element in a Sorted Array
// Approach: Binary Search on pairs
// Complexity: O(log n), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int single(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2]) return arr[n-1];

        int lo = 0, hi = n-2;
        while(lo <= hi){
            int mid = (lo+hi)/2;
            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]){
                return arr[mid];
            }
            else if((mid%2==1 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        return -1;
    }
};
