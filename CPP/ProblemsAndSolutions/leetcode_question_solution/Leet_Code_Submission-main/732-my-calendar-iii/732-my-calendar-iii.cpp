class MyCalendarThree {
public:
    map<int,int> mp;
    int maxcount = 0;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        
        mp[start]++;
        mp[end]--;
        int count=0;
        
        for(auto it = mp.begin();it!=mp.end();it++ ){
            count+= it->second;
            maxcount=max(count,maxcount);
        }
        return maxcount;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */