//https://leetcode.com/problems/group-anagrams/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        unordered_map<string, vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            m[x].push_back(strs[i]);
        }
        for(auto it: m){
            vec.push_back(it.second);
        }
        return vec;
    }
};