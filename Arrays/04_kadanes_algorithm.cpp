/*
Problem: Find the maximum subarray sum (Kadane's Algorithm).
Approach: Maintain current sum, reset to 0 if sum < 0, and track max sum.
Complexity: O(n) time, O(1) space
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxSum){
                maxSum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxSum;
    }
};
int main() {
    Solution obj;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << obj.maxSubarraySum(arr); // Output: 6 (subarray [4,-1,2,1])
}