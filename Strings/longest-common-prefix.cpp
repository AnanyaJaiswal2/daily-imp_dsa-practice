// Problem: Longest Common Prefix
// Approach: Sort array, then compare first and last string
// Complexity: O(n log n) for sort + O(m) for compare, O(1) extra space
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string> arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        string res = "";
        string first = arr[0], last = arr[n-1];

        for(int i=0; i<first.size(); i++) {
            if(first[i] != last[i]) break;
            res += first[i];
        }
        return res;
    }
};
