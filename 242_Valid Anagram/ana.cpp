#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/valid-anagram/
class Solution {
    public:
        bool isAnagram(string s, string t) {
            int n = s.length();
            int m = t.length();
            if (n!=m) return false;
            unordered_map<char,int> check;
            for(int i=0;i<n;i++){
                check[s[i]] += 1;
            }
            for(int j=0;j<m;j++){
                check[t[j]] -= 1;
            }
            for(auto pair: check){
                if(pair.second != 0) return false;
            }
            return true;
        }};