class Solution {
public:
    int rev(int n) {
            int revi = 0; 
            while (n >0) {
                int p = n % 10;
                revi = revi * 10 + p;
                n = n / 10;
            }
        return revi;
    }
    int countNicePairs(vector<int>& nums) {
        int m=1e9+7;
        unordered_map<int,int>mp;
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=(nums[i]-rev(nums[i]));
        }
          for(int i=0;i<nums.size();i++)
          {
            res=(res+mp[nums[i]])%m;
            mp[nums[i]]++;
          }
          return res;

        
    }
};