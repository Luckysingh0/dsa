class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<int>st;
        stack<int>p;
        for(char &ch:s)
        {
            if(ch=='#')
            {
                if(!st.empty())
                st.pop();
            }
            else{
                st.push(ch);
            }
        }
        for(char &ch:t)
        {
            if(ch=='#')
            {
                if(!p.empty())
                p.pop();
            }
            else{
                p.push(ch);
            }
        }
        if(st.size()!=p.size())
        return false;
        while(!st.empty())
        {
        if(st.top()!=p.top())
        {
            return false;
        }
        else{
            p.pop();
            st.pop();
        }
        }
        return true;
    }
};