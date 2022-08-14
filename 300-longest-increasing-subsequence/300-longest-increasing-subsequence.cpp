class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        vector<int> arr(nums.size(),1);
        arr[0]= 1;
        
        for(int i=1; i <nums.size(); i++)
        {
            int j=i-1;
            arr[i]=1;
             while(j>=0)
             {
                 if(nums[j]<nums[i])
                 {
                     arr[i]= max(arr[i], 1+ arr[j]);
                 }
                 j--;
             }
        }
        
        int lis=INT_MIN;
        for(int i=0 ; i< nums.size(); i++)
        {
            lis= max(lis,arr[i]);
        }
        return lis;
        
    }
};