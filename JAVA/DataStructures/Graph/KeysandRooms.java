/**
 * Leetcode graph-tagged question #841
 * Question link: https://leetcode.com/problems/keys-and-rooms/
 */

import java.util.*;

public class KeysandRooms {

    public static void main(String[] args) {
        List<List<Integer>> rooms = new ArrayList<>();
        rooms.add(Arrays.asList(new Integer[]{1}));
        rooms.add(Arrays.asList(new Integer[]{2}));
        rooms.add(Arrays.asList(new Integer[]{3}));
        rooms.add(Arrays.asList(new Integer[]{}));

        Solution solution = new Solution();
        System.out.println(solution.canVisitAllRooms(rooms));
    }

    static class Solution {
        public boolean canVisitAllRooms(List<List<Integer>> rooms) {
            Set<Integer> visited = new HashSet<>();

            Deque<Integer> q = new ArrayDeque<>();
            q.add(0);
            visited.add(0);

            while(!q.isEmpty()) {
                int x = q.poll();

                for(int i: rooms.get(x)) {
                    if(!visited.contains(i)) {
                        q.add(i);
                        visited.add(i);
                    }
                }
            }

            return visited.size() == rooms.size();
        }
    }
}
