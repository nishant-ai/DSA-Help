class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size();
        
        if(n<3) return n;
        
        int indx = 2;
        
        for (int j = 2;j<nums.size();j++){
            if(nums[j]!= nums[indx-2]){
                nums[indx] = nums[j];
                indx++;
            }
        }
        return indx;
        
        
    }
};

