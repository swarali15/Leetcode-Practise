class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indOfLastNonZero=0;
        for(int i=0 ; i< nums.size() ; i++)
        {
            if(nums[i]!=0)
            {nums[indOfLastNonZero++]= nums[i];}
        }
        for(int i= indOfLastNonZero; i<nums.size(); i++)
        {
            nums[i]=0;
        }
        
    }
};