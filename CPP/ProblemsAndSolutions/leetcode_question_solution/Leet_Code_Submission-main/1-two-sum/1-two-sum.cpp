class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> arr(n);
        for (int i = 0; i < n; ++i) {
            arr[i] = make_pair(nums[i], i);
        }
         // Sort arr in increasing order by their values.
        sort(arr.begin(), arr.end());
        int a_pointer = 0, b_pointer = n- 1;
        while (a_pointer < b_pointer) {
            int sum2 = arr[a_pointer].first + arr[b_pointer].first;
            if (sum2 == target) 
                return {arr[a_pointer].second, arr[b_pointer].second};
            if (sum2 > target)
                b_pointer -= 1; // Try to decrease sum2
            else
                a_pointer += 1; // Try to increase sum2
        }
        return {};
    }
    
};