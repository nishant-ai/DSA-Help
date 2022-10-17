/**
 * Question link: https://www.codingninjas.com/codestudio/problems/number-of-distinct-substring_1465938
 */

import java.util.*;

public class NumberOfDistinctSubstring {

    public static void main(String[] args) {
        String word = "abccbc";
        Solution solution = new Solution();
        int ans = solution.distinctSubstring(word);
        System.out.println(ans);
    }

    static class Solution {

        private static class TrieNode {
            Map<Character, TrieNode> next;

            TrieNode() {
                next = new HashMap<>();
            }

            boolean contains(char c) {
                return next.containsKey(c);
            }
            void add(char c) {
                next.put(c, new TrieNode());
                return;
            }

            TrieNode get(char c) {
                return next.get(c);
            }
        }
        public static int distinctSubstring(String st)
        {
            //your code here
            TrieNode root = new TrieNode();
            int length = 0;
            for(int i = 0; i < st.length(); i++)
            {
                length+=createTrie(st, i, root);
            }

            return length;
        }

        private static int createTrie(String s, int x, TrieNode root)
        {
            if(x == s.length())
                return 0;

            char c = s.charAt(x++);

            int count = 0;
            if(!root.contains(c))
            {
                count = 1;
                root.add(c);
            }
            TrieNode next = root.get(c);
            return count + createTrie(s, x, next);
        }
    }
}
