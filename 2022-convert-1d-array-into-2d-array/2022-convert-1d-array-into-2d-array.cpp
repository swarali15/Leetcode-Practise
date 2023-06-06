class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int i=0,j=0,k=0;
        vector<vector<int>> ans;
        if(m*n != original.size()) return ans;
        for(j ; j<m ; j++)
        {
            vector<int> row;
            for(i=0 ; i<n ; i++)
            {
                row.push_back(original[k++]);
            }
            ans.push_back(row);
        }
        return ans;
        
    }
};