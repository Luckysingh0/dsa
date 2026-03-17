class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>(n/4))
            {
                count=it.first;
            }
        }
        return count;
    }
};