class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        map<vector<int>, int> mp;
        for(auto &row : grid)
        {
            mp[row]++;
        }
        for(int col=0 ; col < grid[0].size() ; col++)
        {
            vector<int> colV;
            for(int r=0 ; r<grid.size();r++)
            {
                colV.push_back(grid[r][col]);
            }
            if(mp.find(colV)!=mp.end() )
            {
                count+=mp[colV];
                //mp[colV]--;
            }
        }
        return count;
    }
};