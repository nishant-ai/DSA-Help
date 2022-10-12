class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
     mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
    if(mp.find(key) == mp.end())
      {
          return "";
      }
    int l = 0;
    int r = mp[key].size()-1;
    if(mp[key][0].first > timestamp)
    {
        return "";
    }
    string ans;
    while(l<=r)
    {
      int mid = l + (r-l)/2;
      if(mp[key][mid].first == timestamp)
      {
          return mp[key][mid].second;
      }
      else if(mp[key][mid].first < timestamp)
      {
          ans = mp[key][mid].second;
          l = mid+1;
      }
      else
      {
          r = mid-1;
      }
    }
    return ans;
        
    }
};

// Question Link ::

// https://leetcode.com/problems/time-based-key-value-store/
