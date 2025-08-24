// Problem: Painter Partition
// Approach: Binary Search on answer + Greedy allocation
// Complexity: O(n log(sum)), O(1)
#include <bits/stdc++.h>
using namespace std;
int noofworkers(vector<int> arr,int m){
    int n=arr.size();
    int workers=1, sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=m) sum+=arr[i];
        else{
            workers++;
            sum=arr[i];
        }
    }
    return workers;
}

int painter_partition(vector<int> boards,int k){
    int n=boards.size();
    if(k>n) return -1;
    int lo=*max_element(boards.begin(),boards.end());
    int hi=accumulate(boards.begin(),boards.end(),0), ans=hi;
    while(lo<=hi){
        int mid=(lo+hi)/2;
        int workers=noofworkers(boards,mid);
        if(workers>k) lo=mid+1;
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    return ans;
}
