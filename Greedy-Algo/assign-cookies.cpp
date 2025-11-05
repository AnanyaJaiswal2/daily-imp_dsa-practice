#include<bits/stdc++.h>
using namespace std;
int ac(vector<int> g,vector<int>s){
    int n=g.size();
    int m=s.size();
    int l=0;
    int r=0;
    int cnt=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    while(l<n && r<m){
        if(s[r]>=g[l]){
            cnt=cnt+1;
            l++;
        }
        r++;
    }
    return cnt;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> g(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
    }
    vector<int> s(m);
    for(int j=0;j<m;j++){
        cin>>s[j];
    }
    int ans;
    ans=ac(g,s);
    cout<<ans;
    return 0;
}