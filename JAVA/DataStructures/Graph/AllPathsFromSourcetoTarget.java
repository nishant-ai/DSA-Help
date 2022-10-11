/**
 * Leetcode graph-tagged question #797
 * Question link: https://leetcode.com/problems/all-paths-from-source-to-target/
 */

import java.util.*;

public class AllPathsFromSourcetoTarget {

    public static void main(String[] args) {
        int[][] graph = {{1,2},{3},{3},{}};
        Solution solution = new Solution();
        System.out.println(solution.allPathsSourceTarget(graph));
    }

    static class Solution {
        public List<List<Integer>> allPathsSourceTarget(int[][] graph) {
            List<List<Integer>> adj = new ArrayList<>(); //adjacency list

            for(int i = 0; i < graph.length; i++)
                adj.add(new ArrayList<>());

            for(int i = 0; i < graph.length; i++) {
                for(int j: graph[i])
                    adj.get(i).add(j);
            }

            List<List<Integer>> ans = new ArrayList<>();
            traverse(ans, new int[graph.length], adj, 0, new ArrayList<Integer>());
            return ans;
        }

        private void traverse(List<List<Integer>> ans, int[] visited, List<List<Integer>> adj, int node, List<Integer> list) {
            if(node == adj.size() - 1) {
                list.add(node);
                ans.add(new ArrayList<>(list));
                list.remove(list.size() - 1); // backtrack
                return;
            }

            if(visited[node] == 1) //cycle
                return;

            list.add(node);
            visited[node] = 1;

            for(int i: adj.get(node))
                traverse(ans, visited, adj, i, list);
            visited[node] = 0; //reset so that we can traverse from current node again when coming from a different route

            list.remove(list.size() - 1); //backtrack
        }
    }
}
