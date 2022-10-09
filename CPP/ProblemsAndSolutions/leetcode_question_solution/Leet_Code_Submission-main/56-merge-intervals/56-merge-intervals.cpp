class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        vector<vector<int>> mergedIntervals;
        //in case no interval given
        if(intervals.size()==0)
        {
            return mergedIntervals;
        }
        
        //simply sort the intervals so that we have to iterate only once
        sort(intervals.begin(),intervals.end());
        
        
        vector<int> tempinterval = intervals[0];
        
        //we will check that the first element of the next interval is lesser than the last element of previous interval
        
        for(auto it: intervals)
        {
            if(it[0]<=tempinterval[1]){
                tempinterval[1] = max(it[1], tempinterval[1]);
            }else{
            mergedIntervals.push_back(tempinterval);
            tempinterval = it;
        }
        }
    mergedIntervals.push_back(tempinterval);
    return mergedIntervals;
    }

};