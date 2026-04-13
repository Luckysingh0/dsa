class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int l=INT_MAX;
        int x=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                l=(abs(i-start));
                x=min(x,l);
            }
        }
        return x;
    }

};