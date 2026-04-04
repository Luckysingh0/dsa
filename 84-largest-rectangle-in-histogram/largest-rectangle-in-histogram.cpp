class Solution {
public:
    vector<int> nsr(vector<int>& heights){
        stack<int>st;
        vector<int>ans;
        int n=heights.size();
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()] >=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            ans.push_back(n);
            else
            ans.push_back(st.top());

            st.push(i);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
   vector<int> nsl(vector<int>& heights){
        stack<int>st;
        vector<int>ans;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            {
                st.pop();
            }
            if(st.empty())
            ans.push_back(-1);
            else
            ans.push_back(st.top());

            st.push(i);
        }
        return ans;
    }
    int largestRectangleArea(vector<int>& heights) {
         vector<int> right = nsr(heights);
        vector<int> left = nsl(heights);
        int maxi=0;
        for(int i=0;i<heights.size();i++)
        {
            int width=right[i]-left[i]-1;
            int area=width*heights[i];
            maxi=max(area,maxi);
        }
        return maxi;
    }
};