class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums,long long int target) {
        vector<vector<int>> res;
        if(nums.empty())
            return res;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0 ;i< n;i++){
            for(int j = i+1;j<n;j++){
                long long int target_2 = target - nums[i] - nums[j];
                int st = j+1;
                int en = n-1;
                while(st<en){
                    int two_sum = nums[st] + nums[en];
                    if(two_sum < target_2) st++;
                    else if(two_sum > target_2) en--;
                    else{
                        vector<int> quad(4,0);
                        quad[0] = nums[i];
                        quad[1] = nums[j];
                        quad[2] = nums[st];
                        quad[3] = nums[en];
                        res.push_back(quad);
                        
                        while(st<en && nums[st] == quad[2]) st++;
                        while(st<en && nums[en] == quad[3]) en--;
                    }
                }
                
                while(j+1<n && nums[j] == nums[j+1]) j++;
            }
            while(i+1<n && nums[i] == nums[i+1]) i++;
        }
        return res;
    }
};