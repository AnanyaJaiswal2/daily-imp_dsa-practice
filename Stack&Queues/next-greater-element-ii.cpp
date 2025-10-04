#include<bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> nums){
    int n=nums.size();
    stack<int> st;
    vector<int> nums1(n);
    for(int i=2*n-1;i>=0;i--){
       while(!st.empty() && st.top()<=nums[i%n]){
        st.pop();
       }
       if(i<n){
        nums1[i]=st.empty()?-1:st.top();
       }
       st.push(nums[i%n]);
    }
    return nums1;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans;
    ans=nge(nums);
    int m=ans.size();
    for(int i=0;i<m;i++){
        cout<<ans[i];

    }
    return 0;
}

