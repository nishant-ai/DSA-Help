class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.length(); 
        if(n== 1) return "";
        
        for(int i=0;i<n/2;i++) {
            for(char ch ='a'; ch<palindrome[i];ch++) {
                if(palindrome[i] != ch) {
                    palindrome[i]= ch;
                    return palindrome;
                }
            }
        }
        palindrome[n-1] ='b';  
        return palindrome;
    }
};