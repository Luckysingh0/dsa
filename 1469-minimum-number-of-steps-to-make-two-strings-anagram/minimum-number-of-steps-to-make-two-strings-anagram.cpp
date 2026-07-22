class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>arr(26,0);
        int ans=0;
        for(char ch:s)
        {
            arr[ch-'a']++;
        }
        for(char ch:t)
        {
            arr[ch-'a']--;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]>0)
            {
                ans+=arr[i];
            }
        }
        return ans;
    }
};