/**
 * Leetcode graph-tagged question #332
 * Question link: https://leetcode.com/problems/reconstruct-itinerary/
 */
import java.util.*;

public class ReconstructItinerary {

    public static void main(String[] args) {
        List<List<String>> tickets = new ArrayList<>();
        tickets.add(Arrays.asList(new String[]{"MUC","LHR"}));
        tickets.add(Arrays.asList(new String[]{"JFK","MUC"}));
        tickets.add(Arrays.asList(new String[]{"SFO","SJC"}));
        tickets.add(Arrays.asList(new String[]{"LHR","SFO"}));

        Solution solution = new Solution();
        List<String> ans = solution.findItinerary(tickets);

        for(String s: ans)
            System.out.println(s);
    }

    static class Solution {
        List<String> ans;
        public List<String> findItinerary(List<List<String>> tickets) {
            Map<String, PriorityQueue<String>> map = new HashMap<>();
            ans = new ArrayList<>();

            for(List<String> s: tickets) {
                map.putIfAbsent(s.get(0), new PriorityQueue<String>());
                map.get(s.get(0)).add(s.get(1));
            }

            traverse("JFK", map);

            return ans;
        }

        private void traverse(String s, Map<String, PriorityQueue<String>> map) {

            if(!map.containsKey(s) || map.get(s).size() == 0)
            {
                ans.add(0,s);
                return;
            }

            while(!map.get(s).isEmpty()) {
                traverse(map.get(s).poll(), map);
            }
            ans.add(0,s);
        }
    }
}
