/**
 * GFG link: https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1
 * This question can be solved in many ways, but this is the Trie or Prefix-Tree implementation for it.
 * assuming the strings contain only lowercase words(the TrieNode data member 'next' data structure can be modified based on the requirement)
 */

public class LongestCommonPrefix {

    public static void main(String[] args) {
        Solution solution = new Solution();
        String[] words = {"geeks", "geeksforgeeks", "geekds", "geekfs"};

        System.out.println(solution.lcs(words));
    }

    static class Solution {

        public String lcs(String[] words) {
            TrieNode root = new TrieNode();

            for (String word: words)
                createTrie(word, 0, root);

            int len = search(words[0], 0, root, words.length);
            return len > 0 ? words[0].substring(0, len) : "-1";
        }

        //Trie class
        private class TrieNode {
            TrieNode[] next;
            int count; //how many strings is the current substring a prefix

            TrieNode() {
                next = new TrieNode[26];
                count = 0;
            }
        }

        private void createTrie(String s, int in, TrieNode parent) {
            if(in == s.length()) {
                return;
            }

            if(parent.next[s.charAt(in) - 'a'] == null)
                parent.next[s.charAt(in) - 'a'] = new TrieNode();

            parent.next[s.charAt(in) - 'a'].count++;

            createTrie(s, in + 1, parent.next[s.charAt(in) - 'a']);
        }

        private int search(String s, int in, TrieNode parent, int totalWords) {
            if(in == s.length()) {
                return s.length();
            }

            if(parent.next[s.charAt(in) - 'a'].count != totalWords) {
                return in;
            }

            return search(s, in + 1, parent.next[s.charAt(in) - 'a'], totalWords);
        }
    }
}