#include <bits/stdc++.h>
using namespace std;
queue<int> reverseEle(queue<int> q,int k){
      int n=q.size();
      stack<int> st;
      queue<int> q1;
      if(n<k){
        return q;
      }
      for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
      }
      while(!st.empty()){
        q1.push(st.top());
        st.pop();
      }
      while(!q.empty()){
        q1.push(q.front());
        q.pop();
      }
      return q1;
}
int main(){
    int k;
    int n;
    cin>>k;
    cin>>n;
    queue<int> q;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    queue<int> ans;
    ans=reverseEle(q,k);
    while(!ans.empty()){
        cout<<ans.front();
        ans.pop();
    }
    return 0;
}
