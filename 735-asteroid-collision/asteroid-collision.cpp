class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
               int sum = st.top() + asteroids[i];
                if (sum < 0) {
                    st.pop();
                }
                    else if (sum > 0) {
                        break;
                    }
                    else {
                        st.pop();
                        asteroids[i] = 0;
                        break;
                    }
                }
                 if (asteroids[i] != 0 && (st.empty() || !(st.top() > 0 && asteroids[i] < 0)))
                st.push(asteroids[i]);
            }
             vector<int> ans;
        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
        }
    };