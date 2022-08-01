class Solution {
public:
    int uniquePaths(int m, int n) {
        int ndown=m-1, nright=n-1, dir= n+m-2;
        
        double ans=1;
        for(int i=1 ; i<=ndown ; i++)
        {
            ans=ans* (dir-ndown+i)/i;
        }
        return (int)ans;
        
    }
};