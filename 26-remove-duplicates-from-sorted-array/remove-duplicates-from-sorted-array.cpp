class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int i=0;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
            {
                nums.erase(nums.begin()+j);
            }
            else{
            i++;
            j++;
            }

        }
        return nums.size();
    }
};