// Problem: Two Odd Occurring Numbers
// Approach: Hashmap (unordered_map)
// Time Complexity: O(n)
// Space Complexity: O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> twoOddNum(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        
        unordered_map<int,int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        for(auto it : mpp){
            if(it.second % 2 == 1){
                ans.push_back(it.first); 
            }
        }
        sort(ans.begin(), ans.end(), greater<int>());
        return ans;
    }
};
