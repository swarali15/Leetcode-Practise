class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int eve = 0;
        for(int i=0 ; i< nums.size() ; i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[i], nums[eve]);
                eve++;
            }
        }
        return nums;
        
    }
};