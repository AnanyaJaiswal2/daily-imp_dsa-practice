/*
Problem: Find the element that appears only once in an array where every other element appears twice.
Approach: XOR all elements. Property: a^a = 0 and a^0 = a, so all pairs cancel out leaving the unique element.
Complexity: O(n) time, O(1) space
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getSingle(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        return ans;
    }
};
int main() {
    Solution obj;
    vector<int> arr = {4,1,2,1,2};
    cout << obj.getSingle(arr); 
}
