
#include <bits/stdc++.h>
using namespace std;
vector<int> nge(vector<int> nums1,vector<int> nums2){
int n=nums1.size();
int m=nums2.size();
vector<int> arr;

for(int i=0;i<n;i++){
    int ngeis=-1;
    for(int j=0;j<m;j++){
        if(nums1[i]==nums2[j]){
            for(int k=j+1;k<m;k++){
                if(nums2[k]>nums1[i]){
                    ngeis=nums2[k];
                    break;
                }
                
            }
            arr.push_back(ngeis);
            break;
        }
    }
}
return arr;
}
int main(){
int n;
int m;
cin>>n;
cin>>m;
vector<int> nums1(n);
vector<int> nums2(m);
for(int i=0;i<n;i++){
    cin>>nums1[i];
}
for(int j=0;j<m;j++){
    cin>>nums2[j];
}
vector<int> res=nge(nums1,nums2);
for(int val:res){
    cout<<val<<' ';

}
return 0;
}