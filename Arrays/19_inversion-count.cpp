// Problem: Count Inversions in an Array
// Approach: Modified Merge Sort → Count during merge step
// Complexity: O(n log n), O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long merge(vector<int> &arr, int lo, int mid, int hi) {
        vector<int> temp;
        int i = lo, j = mid + 1;
        long long cnt = 0;

        while(i <= mid && j <= hi) {
            if(arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
                cnt += (mid - i + 1); // All remaining left elements are inversions
            }
        }

        while(i <= mid) temp.push_back(arr[i++]);
        while(j <= hi) temp.push_back(arr[j++]);

        for(int k = lo; k <= hi; k++) arr[k] = temp[k - lo];
        return cnt;
    }

    long long mergesort(vector<int> &arr, int lo, int hi) {
        if(lo >= hi) return 0;
        int mid = lo + (hi - lo) / 2;
        long long cnt = 0;
        cnt += mergesort(arr, lo, mid);
        cnt += mergesort(arr, mid + 1, hi);
        cnt += merge(arr, lo, mid, hi);
        return cnt;
    }

    long long inversionCount(vector<int> &arr) {
        return mergesort(arr, 0, arr.size() - 1);
    }
};
