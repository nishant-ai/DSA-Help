//https://leetcode.com/problems/3sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        if(n<3){return result;}
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-2;i++){
            if(nums[i]>0){break;}
            if(i>0 && nums[i-1]==nums[i]){continue;}
            
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                int sum =  nums[i] + nums[j] + nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else {
                    result.push_back({nums[i],nums[j],nums[k]});
                    
                    while(j<k && nums[j]==nums[j+1]){
                        j++;
                    }
                    j++;
                    while(j<n && nums[k]==nums[k-1]){
                        k--;
                    }
                    k--;
                }
            }
        }
        return result;
    }
};