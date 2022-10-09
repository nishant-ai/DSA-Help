class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
      
        int max_cnt = 0, cnt = 0;
        for (auto n : nums) {
            if (n == 1) max_cnt = max(++cnt, max_cnt);
            else cnt = 0;
        }
        return max_cnt;
    
    }
};