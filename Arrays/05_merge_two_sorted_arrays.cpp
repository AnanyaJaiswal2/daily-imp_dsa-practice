/*
Problem: Merge two sorted arrays without using extra space.
Approach: Swap last elements of first array with first elements of second if out of order, then sort both arrays.
Complexity: O((n+m) log(n+m)) due to sorting
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        int i=n-1;
        int j=0;
        while(i>=0 && j<m){
            if(a[i]>b[j]){
                swap(a[i],b[j]);
                i--;
                j++;
            }else{
                break;
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
    }
};
int main() {
    Solution obj;
    vector<int> a = {1,3,5,7};
    vector<int> b = {0,2,6,8,9};
    obj.mergeArrays(a,b);
    
    cout << "A: ";
    for(int x:a) cout << x << " ";
    cout << "\nB: ";
    for(int x:b) cout << x << " ";
}