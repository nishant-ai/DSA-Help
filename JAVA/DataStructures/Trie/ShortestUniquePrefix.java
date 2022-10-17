/**
 * Question link: https://practice.geeksforgeeks.org/problems/shortest-unique-prefix-for-every-word/1
 */

import java.util.*;

public class ShortestUniquePrefix {

    public static void main(String[] args) {
        String[] words = {"zebra", "dog", "duck", "dove"};

        Solution solution = new Solution();
        String[] prefixes = solution.findPrefixes(words, 4);

        for(String s: prefixes)
            System.out.println(s);
    }

     static class Solution {
        static class TrieNode {
            char val;
            int count;
            Map<Character, TrieNode> next;

            TrieNode() {
                count = 0;
                next = new HashMap<Character, TrieNode>();
            }

            TrieNode(char c) {
                count = 1;
                val = c;
                next = new HashMap<Character, TrieNode>();
            }

            void insert(char c) {
                next.put(c, new TrieNode(c));
            }

            void incCount() {
                count++;
            }
        }

        static String[] findPrefixes(String[] arr, int N) {
            // code here
            TrieNode root = new TrieNode();

            for(String s: arr) {
                createTrie(root, s, 0);
            }

            String[] prefixes = new String[N];
            int i = 0;
            for(String s: arr) {
                prefixes[i++] = getPrefix(root, s, 0, new StringBuilder(""));
            }

            return prefixes;
        }

        private static void createTrie(TrieNode root, String s, int x) {
            if(x == s.length())
                return;

            char c = s.charAt(x);

            if(!root.next.containsKey(c)) {
                root.insert(c);
            }
            else {
                root.next.get(c).incCount();
            }

            createTrie(root.next.get(c), s, x+1);
        }

        private static String getPrefix(TrieNode root, String s, int x, StringBuilder st) {
            if(root.count == 1)
                return st.toString();

            char c = s.charAt(x);

            st.append(c);

            return getPrefix(root.next.get(c), s, x + 1, st);

        }
    }
}
