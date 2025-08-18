// Problem: Majority Element
// Approaches: Brute (map), Better (map traversal), Optimal (Moore’s Voting Algorithm)
// Complexities: Brute O(n), Better O(n), Optimal O(n), Space O(1) in Optimal

#include <bits/stdc++.h>
using namespace std;

// ---------------- Brute (using unordered_map while iterating) ----------------
int majorityElementBrute(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> countMap;
    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > n/2) return num;
    }
    return -1;
}

// ---------------- Better (map + second traversal) ----------------
int majorityElementBetter(vector<int>& arr) {
    int n = arr.size();
    map<int,int> mpp;
    for (int i=0;i<n;i++) {
        mpp[arr[i]]++;
    }
    for (auto it:mpp) {
        if (it.second > (n/2)) return it.first;
    }
    return -1;
}

// ---------------- Optimal (Moore’s Voting Algorithm) ----------------
int majorityElementOptimal(vector<int>& arr) {
    int n = arr.size();
    int cnt=0, ele=0;
    for (int i=0;i<n;i++) {
        if (cnt==0) {
            ele = arr[i];
            cnt=1;
        } else if (arr[i]==ele) {
            cnt++;
        } else {
            cnt--;
        }
    }
    // verify
    int cnt1=0;
    for (int i=0;i<n;i++) {
        if (arr[i]==ele) cnt1++;
    }
    if (cnt1>n/2) return ele;
    return -1;
}

// ---------------- Driver code ----------------
int main() {
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "Brute: " << majorityElementBrute(nums) << endl;
    cout << "Better: " << majorityElementBetter(nums) << endl;
    cout << "Optimal: " << majorityElementOptimal(nums) << endl;

    return 0;
}
