class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        
     
        map<int, int> countmap;
        for(int i=0;i<nums.size();i++)
        {
            if(countmap[nums[i]]){
                return true;
            }else
            {
                countmap[nums[i]]++;
            }
            
        }
        return false;
    } 
        
        
};