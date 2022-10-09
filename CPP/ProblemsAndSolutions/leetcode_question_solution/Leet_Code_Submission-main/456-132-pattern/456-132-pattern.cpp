class Solution {
public:
     bool find132pattern(vector<int>& nums) 
     {
        int third = INT_MIN;
        stack<int> s;
        for (int i = nums.size() - 1; i >= 0; -- i) {
            if (nums[i] < third) return true;
            while (!s.empty() && nums[i] > s.top()) {
                third = s.top(); 
                s.pop();
                
            }
            s.push(nums[i]);
        }
        return false;
     }
};
