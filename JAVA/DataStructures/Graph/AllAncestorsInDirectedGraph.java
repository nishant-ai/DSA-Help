/**
 * Leetcode graph-tagged question #2192
 * Question link: https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/
 */
import java.util.*;

public class AllAncestorsInDirectedGraph {

    public static void main(String[] args) {
        int[][] edges = {{0,3},{0,4},{1,3},{2,4},{2,7},{3,5},{3,6},{3,7},{4,6}};

        Solution solution = new Solution();
        System.out.println(solution.getAncestors(8, edges));
    }

    static class Solution {
        public List<List<Integer>> getAncestors(int n, int[][] edges) {
            boolean[][] edge = new boolean[n][n];

            List<List<Integer>> ansc = new ArrayList<>();

            for(int i = 0; i < n; i++) {
                ansc.add(new ArrayList<>());
            }

            for(int[] i: edges) {
                ansc.get(i[1]).add(i[0]);
            }

            for(int i = 0; i < n; i++) {
                setAnsc(ansc, i, i, edge);
            }

            List<List<Integer>> ans = new ArrayList<>();
            for(int i = 0; i < n; i++) {
                ans.add(new ArrayList<Integer>());
                for(int j = 0; j < n; j++) {
                    if(i != j && edge[i][j])
                        ans.get(i).add(j);
                }
            }
            return ans;

            //method 2 although highly costly
            //floyd warshall - takes O(n3)
            // for(int k = 0; k < n; k++) {
            //     for(int i = 0; i < n; i++) {
            //         for(int j = 0; j < n; j++) {
            //             edge[j][i] = edge[j][i] | (edge[j][k] & edge[k][i]);
            //         }
            //     }
            // }
        }


        private void setAnsc(List<List<Integer>> ansc, int par, int node, boolean[][] edge) {
            edge[node][par] = true;

            for(int i: ansc.get(par)) {
                if(!edge[node][i])
                    setAnsc(ansc, i, node, edge);
            }
        }
    }
}
