//https://leetcode.com/problems/longest-consecutive-sequence/

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s (nums.begin(), nums.end());
        int longest = 0;
        for(auto x:s){
            if(!s.count(x-1)){
                int length = 1;
                while(s.count(x + length)){
                    length++;
                }
                longest =  max(longest, length);
            }
        }
        return longest;
    }
};