class Solution {
public:
    vector<int> dp;
    int numDecodings(string s) {
        dp.resize(s.size());
        dp.assign(s.size(),-1);
        return numways(s,0);
        
    }
    int numways(string s, int i)
    {
        if(i>=s.size() ) return 1;
        else if(s[i]=='0') return 0;
        else if( i == s.size()-1) return 1;
        if(dp[i]!=-1) return dp[i];
        else if(s[i]=='1' ||(s[i]=='2' && s[i+1]>=48 && s[i+1]<=54) )
           { dp[i] = numways(s,i+1) + numways(s,i+2); return dp[i];}
        else {dp[i]=numways(s,i+1);  return dp[i];}
    }
};