// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        if(x.size()%2!=0) return false;
        stack<char> st;
        for(auto i: x)
        {
            if(st.size()==0) st.push(i);
            else if((i=='}' && st.top()=='{' )  ||  (i==')' && st.top() =='(') || (i==']' && st.top() =='['))
            {
                st.pop();
            }
            else st.push(i);
            
        }
        if(st.size()==0) return true;
        return false;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends