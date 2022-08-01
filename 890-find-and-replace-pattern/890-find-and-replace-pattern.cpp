class Solution {
public:
    
    bool helper(string w, string p)
    {
        if(w.length()!=p.length()) return false;
        map<char,char> m,m2;
        for(int i=0; i<w.length(); i++)
        {
            if(m.find(w[i])==m.end() && m2.find(p[i])==m2.end())
            {
                m[w[i]]=p[i];
                m2[p[i]]=w[i];
            }
            if(m[w[i]]!=p[i] || m2[p[i]]!=w[i])
            return false;
            
        }
        return true;
    }// a->a, b->b
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        vector<string> res;
        for(int i=0 ; i<words.size() ; i++)
        {
            bool ans = helper(words[i], pattern);
            if(ans) res.push_back(words[i]);
        }
        return res;
        
    }
};