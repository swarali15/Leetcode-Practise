class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int R= matrix.size();
        int C= matrix[0].size();
        vector<vector<int>> ans(C, vector<int>(R,0));
        
        for(int i=0; i<C; i++)
        {
            for(int j=0; j<R; j++)
            
                ans[i][j]= matrix[j][i];
            
        }
        return ans;
    }
};