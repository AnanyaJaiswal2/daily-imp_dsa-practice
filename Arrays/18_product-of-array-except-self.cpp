// Problem: Product of Array Except Self
// Approaches: 
// 1) Brute Force → For each index multiply all others
// 2) Optimal Prefix-Suffix → No division used
// Complexity: Brute O(n^2), Optimal O(n), Space O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n = arr.size();

        // Brute Force (Commented)
        /*
        vector<int> ans;
        for(int i=0; i<n; i++){
            int pro = 1;
            for(int j=0; j<n; j++){
                if(i == j) continue;
                pro *= arr[j];
            }
            ans.push_back(pro);
        }
        return ans;
        */

        // Optimal → Prefix-Suffix method
        vector<int> prefix(n, 1), suffix(n, 1), product(n);

        for(int i=1; i<n; i++) {
            prefix[i] = prefix[i-1] * arr[i-1];
        }
        for(int i=n-2; i>=0; i--) {
            suffix[i] = suffix[i+1] * arr[i+1];
        }
        for(int i=0; i<n; i++) {
            product[i] = prefix[i] * suffix[i];
        }

        return product;
    }
};
