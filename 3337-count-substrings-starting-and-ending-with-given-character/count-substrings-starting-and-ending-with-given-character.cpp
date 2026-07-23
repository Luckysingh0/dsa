class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count=0;
        long long prevc=0;
        for(char ch:s)
        {
            if(ch==c)
            {
                count+=prevc+1;
                prevc++;
            }
        }
        return count;
    }
};