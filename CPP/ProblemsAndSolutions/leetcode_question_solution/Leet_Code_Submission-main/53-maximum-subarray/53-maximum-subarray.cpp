class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     //kadane's algo which is o(1);
        long long sum = 0 , maxsum = nums[0];
        
        for(int i=0;i<nums.size();i++)
        {
            sum = sum + nums[i];
             maxsum = max(sum,maxsum);
            if (sum<0){
            sum = 0;
        }
        }
       
        
        
        return maxsum;
    }
};