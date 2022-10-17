class Solution {
public:
    bool checkIfPangram(string s) 
    {
        set<char>st;
        for(auto it:s)
            st.insert(it);
        return st.size()==26;
    }
};