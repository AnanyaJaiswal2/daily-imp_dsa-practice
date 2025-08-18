// Problem: Find Missing and Repeated Values
// Approach: Brute Force using map
// Complexity: Time O(n^2), Space O(n^2)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int miss = 0, rep = 0;
        map<int,int> mpp;

        // Count frequency of each element
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mpp[grid[i][j]]++;
            }
        }

        // Find repeated
        for(auto it:mpp){
            if(it.second > 1) rep = it.first;
        }

        // Find missing
        for(int num = 1; num <= n*n; num++){
            if(mpp[num] == 0) miss = num;
        }

        return {rep,miss};
    }
};

// ---------------- Driver Code ----------------
int main() {
    vector<vector<int>> grid = {{1,3},{2,2}};
    Solution sol;
    vector<int> ans = sol.findMissingAndRepeatedValues(grid);
    cout << "Repeated: " << ans[0] << ", Missing: " << ans[1] << endl;
    return 0;
}
