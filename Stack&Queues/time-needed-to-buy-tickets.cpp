#include <bits/stdc++.h>
using namespace std;
int time(vector<int>tickets,int k){
    queue<int> q;
    int n=tickets.size();
    for(int i=0;i<n;i++){
        q.push(tickets[i]);
    }
    int cnt=0;
    int ans=0;
    while(true){
        ans=q.front();
        q.pop();
        ans--;
        cnt++;
    
    if(k==0 && ans==0){
        return cnt;
    }
    if(ans>0){
        q.push(ans);
    }
    if(k==0){
        k=q.size()-1;
    }else{
        k--;
    }
    }
    return cnt;
}
int main(){
    int k;
    int n;
    cin>>k;
    cin>>n;
    vector<int> tickets(n);
    for(int i=0;i<n;i++){
        cin>>tickets[i];
    }
    int anss;
    anss=time(tickets,k);
    cout<<anss;
    return 0;
}