class Solution {
public:
    int minCost(string s, vector<int>& cost) {
        int total_cost=0; 
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) {
                 total_cost=total_cost+min(cost[i],cost[i+1]);   // update total cost
                 cost[i+1]=max(cost[i],cost[i+1]);    // update cost with max cost before next iteration   
                }
       }
        return total_cost;
    }
};