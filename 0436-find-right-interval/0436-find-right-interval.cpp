class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0 ; i<intervals.size(); i++)
        {
            mp[intervals[i][0]]=i;
        }
        for(int i=0 ; i<intervals.size(); i++)
        {
            ans.push_back(mp.lower_bound(intervals[i][1])!=mp.end() ? mp.lower_bound(intervals[i][1])->second :-1);
        }
        return ans;
    }
};