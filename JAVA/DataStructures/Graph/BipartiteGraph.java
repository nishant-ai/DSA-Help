/**
 * Leetcode graph-tagged question #785
 * Question link: https://leetcode.com/problems/is-graph-bipartite/
 */


import java.util.*;

public class BipartiteGraph {

    public static void main(String[] args) {
        int[][] graph = {{1,2,3},{0,2},{0,1,3},{0,2}};
        Solution solution = new Solution();
        System.out.println(solution.isBipartite(graph));
    }

    static class Solution {
        public boolean isBipartite(int[][] graph) {
            Map<Integer,Integer> m = new HashMap<>();

            for(int i=0;i<graph.length;i++)
            {
                if(m.containsKey(i))
                    continue;
                if(!traverse(graph,i,0,m))
                    return false;
            }
            return true;
        }

        boolean traverse(int[][] graph, int x, int col, Map<Integer,Integer> m)
        {
            if(m.containsKey(x))
            {
                if((int)m.get(x) != col) //if colour is already assigned to the node but it is not col, then there is an inconsistency i.e. graph is not bipartite
                    return false;
                return true;
            }

            m.put(x,col); // assign colour 'col' to current node

            for(int i:graph[x])
            {

                if(!traverse(graph,i,(col+1)%2,m)) // if current node has colour 1 then adjacent nodes should have colour 0 and vice versa
                {
                    return false;
                }

            }
            return true;
        }
    }
}
