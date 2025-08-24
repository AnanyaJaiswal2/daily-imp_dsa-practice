// Problem: Book Allocation
// Approach: Binary Search on answer + Greedy check
// Complexity: O(n log(sum)), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int cntStudents(vector<int> stu, int m){
        int n = stu.size();
        int students = 1;
        long long pages = 0;
        for(int i=0; i<n; i++){
            if(pages + stu[i] <= m){
                pages += stu[i];
            } else {
                students++;
                pages = stu[i];
            }
        }
        return students;
    }
    
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k > n) return -1;
        
        int lo = *max_element(arr.begin(), arr.end());
        int hi = accumulate(arr.begin(), arr.end(), 0);
        while(lo <= hi){
            int mid = (lo+hi)/2;
            int noOfStudents = cntStudents(arr, mid);
            if(noOfStudents > k) lo = mid+1;
            else hi = mid-1;
        }
        return lo;
    }
};
