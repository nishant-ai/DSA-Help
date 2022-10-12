/**
 * Leetcode graph-tagged question #743
 * Question link: https://leetcode.com/problems/network-delay-time/
 */

import java.util.*;

public class NetworkDelayTime {

    public static void main(String[] args) {
        int[][] times = {{2,1,1},{2,3,1},{3,4,1}};
        Solution solution = new Solution();
        System.out.println(solution.networkDelayTime(times, 4, 2));
    }

    static class Solution {
        public int networkDelayTime(int[][] times, int n, int k) {

            int[] time = new int[n + 1]; // store the minimum time taken for node i to receive signal

            List<List<int[]>> adj = new ArrayList<>();

            for(int i = 0; i < n + 1; i++)
                adj.add(new ArrayList<int[]>());

            for(int[] i: times) {
                adj.get(i[0]).add(new int[]{i[1], i[2]});
            }

            Arrays.fill(time, Integer.MAX_VALUE);

            time[k] = 0;

            PriorityQueue<Integer> q = new PriorityQueue<>((a,b) -> time[a] - time[b]); //next interested node to propagate signal from would be the one with minimum time in the queue
            q.add(k);

            int count = 0;
            int maxTime = 0;
            Set<Integer> set = new HashSet<>(); //don't propagate from a node which has already propagated the signal
            while(!q.isEmpty()) {
                int x = q.poll();

                if(set.contains(x))
                    continue;

                set.add(x);
                maxTime = Math.max(maxTime, time[x]);
                count++;
                for(int[] i: adj.get(x)) {
                    time[i[0]] = Math.min(time[i[0]], time[x] + i[1]);
                    q.add(i[0]);
                }

            }

            return count == n ? maxTime : -1;
        }
    }
}
