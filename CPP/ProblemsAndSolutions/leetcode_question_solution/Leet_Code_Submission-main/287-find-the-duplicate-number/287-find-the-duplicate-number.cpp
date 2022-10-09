class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        unordered_map<int, int> m;
        int duplicate = 0;
        for(int i=0;i<nums.size();i++)
        {
           m[nums[i]]++;
        }
        
        for(auto i: m)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
};