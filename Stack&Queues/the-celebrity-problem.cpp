#include <bits/stdc++.h>
using namespace std;
int cp(vector<vector<int>> mat){
   int n=mat.size();
   int m=mat[0].size();
   int top=0;
   int down=n-1;
   while(top<down){
    if(mat[top][down]==1){
        top++;
    }
    else if(mat[down][top]==1){
        down--;
    }else{
        top++;
        down--;
    }
    if(top>down) return -1;
    for(int i=0;i<n;i++){
     if(i==top) continue;
       if(mat[top][i]==0 && mat[i][top]==1){
                        continue;
                    }else{
                        return -1;
                    }
    }
}
   return top;
}
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
        cin>>mat[i][j];
       }
    }
    int ans=cp(mat);
    cout<<ans;
    return 0;
}