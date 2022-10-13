class Solution {
public:
    double findMedianSortedArrays(vector<int>& num1, vector<int>& num2) {
        
        vector<int >v;
        for(auto i : num1){
            v.push_back(i);
            
        }
          for(auto i : num2){
            v.push_back(i);
            
        }
        int n = v.size();
        sort(v.begin(),v.end());
        if(n%2==0){
            return (v[n/2-1]+v[n/2])/2.0;
           
            
        }
         return v[n/2];
        
    }
};
