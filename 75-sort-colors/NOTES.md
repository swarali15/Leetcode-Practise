1st approach sort using in built O(nlogn)
2nd A : count zeros 1s 2s and modify arr O(2n)
3rd A : dutch National Flag Algo
low =0, mid=0 , high=n-1
for(auto i :  nums)
{
if(i ==0) swap nums[low] & nums[mid] and low++, mid++
if(i==1) mid++
else if(i==2) swap nums[mid]  nums[high] and high--;
}
​