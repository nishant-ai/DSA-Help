class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        vector<pair<int,int>> vec;
        for(int i=0;i<nums.size();i++)
        {
            vec.push_back(make_pair(nums[i],i));
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size()-1;i++)
        {
            if(vec[i].first==vec[i+1].first && (abs(vec[i].second-vec[i+1].second)<=k))
                return true;
        }
    
    return false;
}
    
};