/**
 * Leetcode graph-tagged question #210
 * Question link: https://leetcode.com/problems/course-schedule-ii/
 */
import java.util.ArrayList;
import java.util.List;

public class CourseScheduleII {

    public static void main(String[] args) {
        int[][] prerequisites = {{1,0},{2,0},{3,1},{3,2}};

        Solution solution = new Solution();
        int[] ans = solution.findOrder(4, prerequisites);

        for(int i: ans)
            System.out.println(i);
    }

    static class Solution {
        int x;
        public int[] findOrder(int numCourses, int[][] prerequisites) {

            List<List<Integer>> adj = new ArrayList<>(); //stores the prerequisites for each task

            for(int i = 0; i < numCourses; i++)
                adj.add(new ArrayList<>());

            for(int[] p: prerequisites) {
                int u = p[0];
                int v = p[1];
                adj.get(u).add(v); // v is a prerequisite for u
            }
            x = 0;
            int[] ans = new int[numCourses];

            int[] traversed = new int[numCourses];
            int[] visited = new int[numCourses];

            for(int i = 0; i < numCourses; i++) {
                if(traversed[i] == 0)
                    if(!dfs(visited, traversed, i, adj, ans)) // if cycle found return empty array
                        return new int[]{};
            }

            return ans;

        }

        private boolean dfs(int[] visited, int[] traversed, int node, List<List<Integer>> adj, int[] ans) {
            if(traversed[node] == 1) //we have already computed the order required for finishing task at current node
                return true;

            if(visited[node] == 1) //cyclic dependency found
                return false;

            visited[node] = 1;
            for(int v: adj.get(node)) {
                if(!dfs(visited, traversed, v, adj, ans))
                    return false;

            }
            ans[x++] = node;

            traversed[node] = 1;
            visited[node] = 0;
            return true;
        }
    }
}
