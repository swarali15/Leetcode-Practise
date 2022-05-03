class Solution {
public:
    void helper( vector<int>& nums, vector<vector<int>> &ans, vector<int> &ds,vector<int> freq)
    {
        if(ds.size()==nums.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i= 0; i<nums.size(); i++)
        {
            if(!freq[i]){
                freq[i]=1;
                ds.push_back(nums[i]);
                helper(nums,ans,ds,freq);
                freq[i]=0;
                ds.pop_back();
                
            }
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int> ds;
        vector<vector<int>> ans;
        const int s= nums.size();
        vector<int> freq(s,0);
        helper(nums,ans,ds,freq);
        return ans;
    }
};