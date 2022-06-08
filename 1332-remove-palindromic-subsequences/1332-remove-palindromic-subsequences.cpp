class Solution {
public:
    int removePalindromeSub(string s) 
    {
        //condition ? exp1 :exp2 ;
        return s.empty() ? 0 : (s==string(s.rbegin(), s.rend())) ? 1:2;
        
    }
};