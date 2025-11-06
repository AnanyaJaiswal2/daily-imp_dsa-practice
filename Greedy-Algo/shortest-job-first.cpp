#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> bt){
    int n=bt.size();
    sort(bt.begin(),bt.end());
    int wt=0;
    int t=0;
    for(int i=0;i<n;i++){
        wt+=t;
        t+=bt[i];
    }
    return int(wt/n);
}
int main(){
int n;

cin>>n;
vector<int> bt(n);
for(int i=0;i<n;i++){
    cin>>bt[i];
}
int ans=solve(bt);
cout<<ans;
return 0;
}