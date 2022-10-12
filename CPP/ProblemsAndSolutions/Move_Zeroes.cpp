class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzeroes = 0;
        // using two pointer approch 
        int n =nums.size();
        
        for(int j =0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[j],nums[nonzeroes]);
                nonzeroes++;
            }
        }
        
    }
};


// question link :
// https://leetcode.com/problems/move-zeroes/
