#include<bits/stdc++.h>
using namespace std;
vector<int> pse(vector<int> arr){
    int n=arr.size();
    stack<int> st;
    vector<int>answer(n);
    answer[0]=-1;
    st.push(arr[0]);
    for(int i=1;i<n;i++){
      while(!st.empty() && st.top()>=arr[i]){
        st.pop();
      }
      answer[i]=st.empty()?-1:st.top();
      st.push(arr[i]);
    }
    return answer;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    ans=pse(arr);
    int m=arr.size();
    for(int i=0;i<m;i++){
        cout<<ans[i];
    }
    return 0;
}