// Problem: Aggressive Cows
// Approach: Binary Search on Answer + Greedy placement
// Complexity: O(n log(max)), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBePlaced(vector<int> &arr, int mi, int k) {
        int n = arr.size();
        int cntcow = 1;
        int last = arr[0];
        for(int i=1; i<n; i++) {
            if(arr[i]-last >= mi) {
                cntcow++;
                last = arr[i];
            }
        }
        return cntcow >= k;
    }

    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size();
        sort(stalls.begin(), stalls.end());
        int lo = 0, hi = stalls[n-1] - stalls[0];
        while(lo <= hi) {
            int mid = (lo+hi)/2;
            if(canBePlaced(stalls, mid, k)) {
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        return hi;
    }
};
