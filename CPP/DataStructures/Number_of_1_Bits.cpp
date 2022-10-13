//link for problem statement on leetcode: https://leetcode.com/problems/number-of-1-bits/


class Solution {
public:
    int hammingWeight(int n) {
        long long int count=0;
        while(n!=0){
           long long int k=n%10;
            if(n&1)
                count++;
            n=n>>1;
        }
        return count;
    }
};