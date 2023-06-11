class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, mid;
        while(l<=r)
        {
            mid = (r-l)/2 + l;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                l =mid+1;
            }
            else
                r = mid-1;
        }
        return l<=0 ? 0 : l-1 ;
        
    }
    int countNegatives(vector<vector<int>>& grid) {
       
        int count=0;
        int n = grid[0].size();
        for(auto& row : grid)
        {
            int index = upper_bound(row.begin(), row.end(),0, greater<int>()) - row.begin();//search(row , 0);
            cout<<index<<" ";
            count+= (n-index);
        }
        return count;
    }
};