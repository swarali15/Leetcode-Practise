class TimeMap {
public:
    unordered_map<string, unordered_map<int, string>>  keyTimeMap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        keyTimeMap[key][timestamp]=value;
        
    }
    
    string get(string key, int timestamp) {
        if(keyTimeMap.find(key)==keyTimeMap.end()) return "";
        for(int i=timestamp; i>=1;i--)
        {
            if(keyTimeMap[key].count(i)) return keyTimeMap[key][i];
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */