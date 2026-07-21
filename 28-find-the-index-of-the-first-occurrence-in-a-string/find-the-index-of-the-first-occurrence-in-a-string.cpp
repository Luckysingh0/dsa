class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        if(haystack.size()<n)
        return -1;
        for(int i=0;i<haystack.size()-(n-1);i++)
        {
            string s=haystack.substr(i,n);
            if(s==needle)
            return i;
        }

        return -1;
    }
};