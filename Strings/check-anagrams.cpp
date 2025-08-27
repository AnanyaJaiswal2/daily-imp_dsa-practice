// Problem: Check if Two Strings are Anagrams
// Approach: Frequency HashMap comparison
// Complexity: O(n), O(1) ~ since only lowercase letters
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool areAnagrams(string& s1, string& s2) {
        if(s1.size() != s2.size()) return false;
        
        unordered_map<char,int> freq1, freq2;
        for(char c : s1) freq1[c]++;
        for(char c : s2) freq2[c]++;
        
        for(auto it : freq1) {
            if(freq2[it.first] != it.second) return false;
        }
        return true;
    }
};
