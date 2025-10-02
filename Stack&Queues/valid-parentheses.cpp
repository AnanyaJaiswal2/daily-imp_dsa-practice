#include <bits/stdc++.h>
using namespace std;
bool isValid(string s){
    int n=s.size();
    stack<int> st;
    for(char c:s){
        if(c=='(' || c=='{' || c=='['){
            st.push(c);
        }else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
          if((c==')' && top!='(') || (c=='}' && top!='{') || (c==']' && top!='[')) return false;
        
        }
        }
    return st.empty();
}

int main(){
    string s;
    cin>>s;
    bool ans=isValid(s);
    cout<<(ans ? "true" : "false");
    return 0;
}