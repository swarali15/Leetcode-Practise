class Solution {
public:
    void helper(vector<vector<int>> &ans, int index,vector<int>& nums )
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=index; i<nums.size(); i++)
        {
            swap(nums[index],nums[i]);
            helper(ans,index+1,nums);
            swap(nums[index],nums[i]);
        }
        
        
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(nums.size(), 0);
        helper(ans,0,nums);
        return ans;
    }
};