// Problem: Stock Buy and Sell (Multiple Transactions Allowed)
// Approach: Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int stockBuySell(vector<int> &arr) {
        int maxProfit = 0;
        int n = arr.size();

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                maxProfit += arr[i] - arr[i - 1];  
            }
        }
        return maxProfit;
    }
};
