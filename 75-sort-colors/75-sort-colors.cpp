class Solution {
public:
    void sortColors(vector<int>& nums) 
    {int c0=0,c1=0,c2=0;
     for(int num:nums)
     {
         if(num==0)c0++;
         if(num==1) c1++;
         if(num==2) c2++;
     }
     int i=0;
     while(c0)
     {
         nums[i++]=0;
         c0--;
     }
     while(c1)
     {
         nums[i++]=1;
         c1--;
     }
     while(c2)
     {
         nums[i++]=2;
         c2--;
     }
    }
};