// Problem: Reverse Words in a String (dot separated)
// Approach: Split into words, reverse array, join with '.'
// Complexity: O(n), O(n)
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string reverseWords(string &s) {
        vector<string> words;
        string word="";
        int n=s.size();
        for(char c:s){
            if(c=='.'){
                if(!word.empty()){
                    words.push_back(word);
                    word.clear();
                }
                continue;
            }
            word+=c;
        }
        if(!word.empty()){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string res="";
        for(int i=0;i<words.size();i++){
            if(i>0) res+='.';
            res+=words[i];
        }
        return res;
    }
};
