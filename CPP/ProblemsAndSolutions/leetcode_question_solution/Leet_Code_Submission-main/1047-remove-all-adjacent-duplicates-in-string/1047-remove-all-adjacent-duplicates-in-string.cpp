class Solution {
public:
    string removeDuplicates(string s) {
       
        string ans;
        for(auto c:s)
        {
            if(!ans.empty() && ans.back()==c)
                ans.pop_back();
            else
                ans.push_back(c);
        }
        return ans;
    
    }
};