// Leetcode solution to problem #279 Perfect Squares
// Medium

// https://leetcode.com/problems/perfect-squares/

// code

class Solution {
    public int numSquares(int n) {
        int dp[]=new int [n+1];
        dp[0]=0;
        dp[1]=1;

        for(int i=2;i<dp.length;i++){
            int min=Integer.MAX_VALUE;
            for(int j=1;j*j<=i;j++){
                min=Math.min(min,dp[i-j*j]);
            }
            dp[i]=min+1;
        }
        return dp[n];
    }
}
