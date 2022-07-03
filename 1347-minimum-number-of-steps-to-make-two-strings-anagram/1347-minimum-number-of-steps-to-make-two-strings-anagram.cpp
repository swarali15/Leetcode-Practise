class Solution {
public:
    int minSteps(string s, string t) 
    {
        vector<int> ms(26,0), mt(26,0);
        int del=0;
        for(int i=0 ; i< s.size(); i++) ms[s[i]-'a']++;
        for(int i=0 ; i<t.size(); i++) mt[t[i]- 'a']++;
        
        for(int i=0 ; i<26 ; i++)
        {
            if(mt[i]< ms[i]) del+= ms[i]-mt[i];
        }
     return del;   
    }
};