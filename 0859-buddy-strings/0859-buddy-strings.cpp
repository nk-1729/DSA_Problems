class Solution {
public:
    bool buddyStrings(string s, string g) 
    {
        int n=s.length();
        if(s==g)
        {
            set<int>st;
            for(int i=0;i<n;i++)
            {
                st.insert(s[i]);
                st.insert(g[i]);
            }
            return !(st.size()==n);
        }
        
        int x=-1,y=-1,k=0;
        for(int i=0;i<s.length();i++)
        { 
            if(s[i]!=g[i])
            {
                if(k==0)
                {  k++; x=i; }
                else
                    y=i;   
            }
        }
        
        if(x!=-1 and y!=-1)
            swap(s[x],s[y]);
        
        if(s==g)
            return true;
        
        return false;
        
    }
};