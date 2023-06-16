class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0 , r=nums.size()-1;
        int mid=0;
        while(l<r)
        {
           mid= (l+r)/2;
            if(nums[mid]>nums[r])  l= mid+1;
            else r = mid;
        }
       int s = l;
        l = 0; r = nums.size()-1;
        if(target >= nums[s] && target <= nums[r]){
            l = s;
        }else{
            r = s;
        }
        cout<<l<<" "<<r;
        // the regular search.
        while(l<=r){
            mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid] > target) r = mid-1;
            else l=mid+1;
        }
        
        return -1;
    }
};
/******************
A1: sort and binary search nlogn
A2 : find pivot binary search on two arrays
A3: find pivot using BS and thenn!!! using (mid+rotation)%n to find real mid!
Magic!
*******************/