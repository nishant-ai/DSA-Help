/**
 * Leetcode graph-tagged question #329
 * Question link: https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
 */
public class LongestIncreasingPathInAMatrix {

    public static void main(String[] args) {
        int[][] matrix = {{3,4,5},{3,2,6},{2,2,1}};
        Solution solution = new Solution();
        int ans = solution.longestIncreasingPath(matrix);
        System.out.println(ans);
    }

    static class Solution {
        public int longestIncreasingPath(int[][] matrix) {
            int max=0;
            int dp[][]=new int[matrix.length][matrix[0].length];

            for(int i=0;i<matrix.length;i++)
            {
                for(int j=0;j<matrix[0].length;j++)
                {
                    if(dp[i][j]==0)
                    {
                        if(isValid(i+1, j, i, j, matrix))
                        {
                            dp[i][j]=Math.max(dp[i][j],traverse(i+1,j,i,j,matrix,dp)+1);
                        }
                        if(isValid(i-1, j, i, j, matrix))
                        {
                            dp[i][j]=Math.max(dp[i][j],traverse(i-1,j,i,j,matrix,dp)+1);
                        }
                        if(isValid(i, j+1, i, j, matrix))
                        {
                            dp[i][j]=Math.max(dp[i][j],traverse(i,j+1,i,j,matrix,dp)+1);
                        }
                        if(isValid(i, j-1, i, j,matrix))
                        {
                            dp[i][j]=Math.max(dp[i][j],traverse(i,j-1,i,j,matrix,dp)+1);
                        }

                        dp[i][j]=Math.max(dp[i][j],1);

                    }
                    max=Math.max(max,dp[i][j]);

                }
            }
            return max;
        }

        int traverse(int i, int j, int p_i, int p_j, int[][] mat, int[][] dp)
        {
            if(dp[i][j]>0)
                return dp[i][j];

            if(isValid(i+1,j,i,j,mat))
                dp[i][j]=Math.max(dp[i][j],traverse(i+1,j,i,j,mat,dp)+1);

            if(isValid(i-1,j,i,j,mat))
                dp[i][j]=Math.max(dp[i][j],traverse(i-1,j,i,j,mat,dp)+1);

            if(isValid(i,j+1,i,j,mat))
                dp[i][j]=Math.max(dp[i][j],traverse(i,j+1,i,j,mat,dp)+1);

            if(isValid(i,j-1,i,j,mat))
                dp[i][j]=Math.max(dp[i][j],traverse(i,j-1,i,j,mat,dp)+1);

            dp[i][j]=Math.max(dp[i][j],1);

            return dp[i][j];
        }
        boolean isValid(int r, int c, int p_r, int p_c, int[][] mat)
        {
            if(r < 0 || r == mat.length || c < 0 || c == mat[0].length || mat[r][c] <= mat[p_r][p_c])
                return false;
            return true;
        }
    }
}
