/**
 * Leetcode graph-tagged question #913
 * Question link: https://leetcode.com/problems/cat-and-mouse/
 */
import java.util.*;
public class CatAndMouse {

    public static void main(String[] args) {
        int[][] graph = {{2,5},{3},{0,4,5},{1,4,5},{2,3},{0,2,3}};

        Solution solution = new Solution();
        System.out.println(solution.catMouseGame(graph));
    }

    static class Solution {

        public int catMouseGame(int[][] graph) {
            int[][][] dp = new int[2 * graph.length][graph.length][graph.length];
            for(int[][] j: dp)
                for(int[] i: j)
                    Arrays.fill(i, -1);

            return traverse(graph, 1, 2, dp, 0);
        }

        private int traverse(int[][] graph, int mouse, int cat, int[][][] dp, int turn)
        {
            if(mouse == 0)
                return 1;
            if(mouse == cat)
                return 2;
            if(turn == 2 * graph.length)
                return 0;
            if(dp[turn][mouse][cat] != -1)
                return dp[turn][mouse][cat];

            if(turn % 2 == 0)
            {
                int res = -1;
                for(int i: graph[mouse])
                {
                    int ans = traverse(graph, i, cat, dp, turn + 1);
                    if(ans == 1)
                    {
                        dp[turn][mouse][cat] = 1;
                        return dp[turn][mouse][cat];
                    }
                    if(ans == 0)
                        res = 0;
                }
                dp[turn][mouse][cat] = res == 0? 0 : 2;
            }
            else
            {
                int res = -1;
                for(int i: graph[cat])
                {
                    if(i == 0)
                        continue;
                    int ans = traverse(graph, mouse, i, dp, turn + 1);
                    if(ans == 2)
                    {
                        dp[turn][mouse][cat] = 2;
                        return dp[turn][mouse][cat];
                    }
                    if(ans == 0)
                        res = 0;
                }

                dp[turn][mouse][cat] = res == 0? 0 : 1;
            }
            return dp[turn][mouse][cat];
        }

    }
}
