class Solution {
public:
    int pivotIndex(vector<int>& nums) {
   long long int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
    
    long long int lsum=0;
    long long int rsum= sum;
    
    for(int i=0;i<nums.size();i++)
    {
        rsum = rsum-nums[i];
        
        if(lsum==rsum)
        {
            return i;
        }
        
        lsum +=nums[i]; 
    }
    return -1;
}

    
};