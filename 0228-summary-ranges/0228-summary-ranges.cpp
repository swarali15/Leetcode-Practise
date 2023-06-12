class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string ans;
        vector<string> ansl;
        if(nums.size()==0) return ansl;
        
        int i=0,j=1;
       
        for(int z=0 ; z< nums.size() ; z++)
        {
            i=z;
            while( z+1 < nums.size() && nums[z+1]== nums[z]+1 )
            {
                j++;
                z++;
            }
            if(nums[i]!=nums[z])
            {
                ansl.push_back(to_string(nums[i])+ "->" + to_string(nums[z]));
            }
            else
            {
                ansl.push_back(to_string(nums[i]));
            }
        }
        return ansl;
        
    }
};