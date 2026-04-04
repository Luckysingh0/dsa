class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int open=0;
        for(char &ch:s)
        {
            if(ch=='(')
            {
                st.push(ch);
            }
            else if(!st.empty()&& st.top()=='(' && ch==')')
            {
            st.pop();
            }
            else if(st.empty() && ch==')')
            open++;
        }


        return st.size()+open;
    }
};