class Solution {
public:
    vector<int> plusOne(vector<int>& digits)
    {
        
        
        //taken the hint
        int n = digits.size()-1;
        
        for(int i = n;i>=0;i--){
            if(digits[i] == 9){
                digits[i]  = 0;
            }
            else{
                digits[i]++;
                return digits;
            }
            
        }
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};


