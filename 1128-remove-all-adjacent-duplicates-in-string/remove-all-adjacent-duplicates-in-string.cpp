class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        st.push(s[0]);
        for (int i = 1; i < s.size(); i++) {

            if (!st.empty() && st.top() != s[i]) {
                st.push(s[i]);
            } else if (!st.empty() && st.top() == s[i]) {
                st.pop();
                if (st.empty()) {
                    st.push(' ');
                }
            }
        }
        string ans = "";

        while (!st.empty()) {
            if (st.top() >= 'a' && st.top() <= 'z') {
                ans += st.top();
                st.pop();
            } else {
                st.pop();
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};