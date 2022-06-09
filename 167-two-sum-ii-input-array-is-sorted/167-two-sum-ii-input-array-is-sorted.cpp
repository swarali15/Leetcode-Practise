class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        for(int i=0; i <nums.size() ; i++)
        {
            int j= binSearch(nums,i+1,nums.size()-1 , target-nums[i]);
            if(j>-1)
            {
                return {i+1,j+1};
            }
        }
       
        return {-1,-1};
    }
    int binSearch(vector<int>& nums , int low, int high , int target)
    {
        int mid=0;
        while(low<=high)
        {
            int mid= low+ (high-low)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                return binSearch(nums, low, mid-1,target);
            else
                return binSearch(nums, mid+1,high,target);
        }
        return -1;
    }
};