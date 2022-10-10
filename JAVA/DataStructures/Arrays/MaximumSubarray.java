public class MaximumSubarray {
    // Question Link:
    // https://leetcode.com/problems/maximum-subarray
    public static void main(String[] args) {
        int[] arr = {-2,1,-3,4,-1,2,1,-5,4};
        System.out.print(maxSubArray(arr));
    }

    static int maxSubArray(int[] nums) {
        // Using Kadane's Algorithm:
        int sum = 0;
        int max = nums[0];
        for(int i=0; i < nums.length; i++) {
            sum += nums[i];
            if(sum > max) {
                max = sum;
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        return max;
    }

}