class Solution {
    public boolean increasingTriplet(int[] nums) {
        int n = nums.length;
        boolean[] f = new boolean[n];
        int min = nums[0];
        for (int i = 0; i < n; i++) {
            f[i] = min < nums[i];
            min = Math.min(min, nums[i]);
        }
        int mx = nums[n - 1];
        for (int i = n - 1; i >= 0; i--) {
            if (f[i] && nums[i] < mx)
                return true;
            mx = Math.max(mx, nums[i]);
        }
        return false;
    }
}