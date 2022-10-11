/**
 * Question link: https://www.codingninjas.com/codestudio/problems/complete-string_2687860
 */

public class CompleteString {

    public static void main(String[] args) {
        String[] words = {"n", "ni", "nin", "ninj", "ninja", "ninga"};
        Solution solution = new Solution();
        String ans = solution.completeString(6, words);
        System.out.println(ans);
    }

    static class Solution {

        private static class TrieNode{
            private TrieNode[] children;
            int count;
            boolean isEndOfWord;

            TrieNode() {
                children = new TrieNode[26];
                count = 0;
                isEndOfWord = false;
            }

            boolean containsChild(char c) {
                return children[c - 97] == null;
            }

            TrieNode getChild(char c) {
                return children[c - 97];
            }

            void addChild(char c) {
                children[c - 97] = new TrieNode();
            }

            void setIsEndOfWord() {
                isEndOfWord = true;
            }

            boolean getIsEndOfWord() {
                return isEndOfWord;
            }
        }
        public static String completeString(int n, String[] a) {
            // Write your code here.
            TrieNode root = new TrieNode();

            for (String s: a)
                createTrie(root, s, 0);

            String ans = "";

            for(String s: a)
            {
                if (isCompleteString(root, s, 0))
                {
                    if(s.length() > ans.length() || (ans.length() == s.length() && s.compareTo(ans) < 0))
                        ans = s;
                }
            }
            //String empty;
            if (ans == "") return "None";
            return ans;
        }

        private static void createTrie(TrieNode root, String s, int x) {
            if (x == s.length()) {
                root.setIsEndOfWord();
                return;
            }

            char child = s.charAt(x);

            if (root.containsChild(child)) {
                root.addChild(child);
            }

            createTrie(root.getChild(child), s, x + 1);
        }

        private static boolean isCompleteString(TrieNode root, String s, int x) {
            if (x == s.length())
            {
                return true;
            }

            char c = s.charAt(x);

            TrieNode child = root.getChild(c);
            if(!child.getIsEndOfWord())
                return false;

            return isCompleteString(child, s, x + 1);
        }
    }
}
