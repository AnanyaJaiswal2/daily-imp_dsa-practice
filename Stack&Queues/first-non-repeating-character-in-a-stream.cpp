#include <bits/stdc++.h>
using namespace std;
string nonrepeating(string s){
    unordered_map<char,int> freq;
    queue<int> q;
    string res="";
    for(char c:s){
        freq[c]++;
        q.push(c);
        while(!q.empty() && freq[q.front()]>1){
            q.pop();
        }
        if(!q.empty()){
            res+=q.front();
        }else{
            res+='#';
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    string ans=nonrepeating(s);
    cout<<ans;
    return 0;
}