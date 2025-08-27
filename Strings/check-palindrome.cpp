// Problem: Check if String is Palindrome
// Approach: Two Pointer (start-end check)
// Complexity: O(n), O(1)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string& s) {
        int l = 0, r = s.size()-1;
        while(l <= r) {
            if(s[l] != s[r]) return false;
            l++; r--;
        }
        return true;
    }
};
