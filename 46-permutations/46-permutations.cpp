class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int>& ds, vector<int>& freq ,vector<int>& nums )
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0 ; i<nums.size(); i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                ds.push_back(nums[i]);
                helper(ans,ds,freq,nums);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        helper(ans,ds,freq,nums);
        return ans;
    }
};