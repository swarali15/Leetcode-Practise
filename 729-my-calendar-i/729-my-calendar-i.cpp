class MyCalendar {
    map<int,int> bookings;
public:
    MyCalendar() {
        //bookings = new vector<vector<int>>();
        
    }
    
    bool book(int start, int end) {
        auto itr= bookings.upper_bound(start);
        if(itr==bookings.end() || end<= itr->second) {
            bookings[end]= start;
            return true;
        }
        
        return false;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */