#include<bits/stdc++.h>
using namespace std;
bool change(vector<int> bills){
    int n=bills.size();
    int fives=0;
    int tens=0;
    
    for(int i=0;i<n;i++){
    if(bills[i]==5){
        fives++;
    }else if(bills[i]==10){
        tens++;
        if(fives) fives--;
        else return false;
    }else{
        
        if(fives && tens){
             fives--;
            tens--;
           
        }
        else if(fives>=3){
            fives=fives-3;
        }else{
            return false;
        } 
    }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int> bills(n);
    for(int i=0;i<n;i++){
        cin>>bills[i];
    }
    bool ans;
    ans=change(bills);
    cout<<ans;
    return 0;
}