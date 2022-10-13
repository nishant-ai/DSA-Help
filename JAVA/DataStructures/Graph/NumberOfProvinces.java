/**
 * Leetcode graph-tagged question #547
 * Question link: https://leetcode.com/problems/number-of-provinces/
 */
import java.util.*;

public class NumberOfProvinces {

    public static void main(String[] args) {
        int[][] conn = {{1,1,0},{1,1,0},{0,0,1}};
        Solution solution = new Solution();
        int ans = solution.findCircleNum(conn);

        System.out.println(ans);
    }

    static class Solution {
        public int findCircleNum(int[][] M) {
            List<List<Integer>> l =new ArrayList<>(); //adjacency list

            for(int i=0;i<M.length;i++)
                l.add(new ArrayList<>());

            for(int i=0;i<M.length;i++)
            {
                for(int j=0;j<M.length;j++)
                    if(i!=j && M[i][j]==1)
                    {
                        l.get(i).add(j);
                        l.get(j).add(i);
                    }
            }

            int ans=0;
            int[] visited=new int[M.length];

            for(int i=0;i<M.length;i++)
            {
                if(visited[i]==0)
                {
                    ans++; //found a new province node
                    traverse(l,i,visited); //include all nodes connected to current as a province i.e. mark them visited
                }
            }
            return ans;
        }

        void traverse(List<List<Integer>> l, int x, int[] visited) //this function marks all nodes connected to current node as marked
        {
            if(visited[x]==1)
                return;
            visited[x]=1;
            for(int i=0;i<l.get(x).size();i++)
            {
                int k=l.get(x).get(i);
                if(visited[k]==0)
                    traverse(l,k,visited);
            }
        }
    }
}