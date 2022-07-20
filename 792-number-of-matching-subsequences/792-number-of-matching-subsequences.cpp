class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        int count=0;
        map<string,int> m; 
        for(int i=0 ; i<words.size() ;i++)
            m[words[i]]++;
        for( auto x: m)
        {
            string wordsT = x.first;
            int ps=0, pt=0;
            while(ps!=s.length() && pt!= wordsT.length())     
            {
              if(s[ps]==wordsT[pt])
                  pt++;
              ps++;
            }
            if (pt==wordsT.length())
                count+=x.second;
        }
        
        return count;
        
    }
};