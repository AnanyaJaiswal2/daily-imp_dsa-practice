// Problem: Search in a 2D Matrix (Each row & col sorted)
// Approach: Start from top-right corner and eliminate row/col
// Time Complexity: O(n + m)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int n = mat.size();
        int m = mat[0].size();
        int i = 0, j = m - 1;

        while (i < n && j >= 0) {
            int curr = mat[i][j];
            if (curr == x) return true;
            else if (curr > x) j--;
            else i++;
        }
        return false;
    }
};
