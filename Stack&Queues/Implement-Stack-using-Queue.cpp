#include<bits/stdc++.h>
using namespace std;
class myStack{
    queue<int> q;
    public:
    void push(int x){
        q.push(x);
        int n=q.size();
        for(int i=0;i<n-1;i++){
          q.push(q.front());
          q.pop();
        }
    }
    void pop(){
        if(!q.empty()){
        q.pop();
        }else{
            cout<<"Queue is empty";
        }
    }
    int top(){
        if(!q.empty()){
         return q.front();
        }else{
            return -1;
        }
    }
        int size(){
           
                return q.size();
            
        }
        bool empty() {
        return q.empty();
    }
    
};
int main(){
    myStack st;
    int n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
     st.push(val);
    }
    cout<<st.top()<<endl;
    cout << "Popping elements:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    cout<<st.size();
    return 0;
}