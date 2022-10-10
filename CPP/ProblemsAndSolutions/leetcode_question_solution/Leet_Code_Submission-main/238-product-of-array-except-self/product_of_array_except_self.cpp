//https://leetcode.com/problems/product-of-array-except-self/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);
        int product1=1, product2=1;
        
        for (int i = 0; i < n; i++) {
            answer[i] = product1;
            product1 *= nums[i];
        }
        for (int i=n-1; i>= 0; i--) {
            answer[i] *= product2;
            product2 *= nums[i];
        }
        
        return answer;
    }
};