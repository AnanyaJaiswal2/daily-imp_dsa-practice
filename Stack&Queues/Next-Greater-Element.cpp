#include <bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> arr){
    int n=arr.size();
      stack<int> st;
      vector<int> ans;
      for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<=arr[i]){
            st.pop();
        }
        int answer=st.empty()?-1:st.top();
        ans.push_back(answer);
        st.push(arr[i]);
      }
      reverse(ans.begin(),ans.end());
      return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res=nge(arr);
    for(int val:res){
        cout<<val<<' ';
    }
    return 0;
}