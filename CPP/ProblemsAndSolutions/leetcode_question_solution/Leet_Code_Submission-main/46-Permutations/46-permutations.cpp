class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() <= 1) {
            return {nums};
        }
        vector<vector<int>> ans;
        for(auto it = nums.begin();it != nums.end();it++) {
            vector<int> temp(nums.begin(), nums.end());
            temp.erase(find(temp.begin(),temp.end(),*it));
            vector<vector<int>> tempans  = permute(temp);
            for(auto x: tempans) {
                x.insert(x.begin(), *it);
                ans.push_back(x);
            }
         }
        return ans;
    }
};